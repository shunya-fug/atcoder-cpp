#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; (i) < (int)(n); ++(i))
#define REP3(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define REP_R(i, n) for (int i = (int)(n)-1; (i) >= 0; --(i))
#define REP3R(i, m, n) for (int i = (int)(n)-1; (i) >= (int)(m); --(i))
#define ALL(x) ::std::begin(x), ::std::end(x)
using namespace std;

int64_t solve(int N, int M, int64_t P, std::vector<int64_t> &A, std::vector<int64_t> &B)
{
    ranges::sort(B);

    vector<int64_t> B_sum(M + 1);
    REP(i, M)
    {
        B_sum[i + 1] = B_sum[i] + B[i];
    }

    int64_t ans = 0;
    for (auto a : A)
    {
        auto lb_i = ranges::lower_bound(B, P - a) - begin(B);
        ans += a * lb_i + B_sum[lb_i];
        ans += P * (M - lb_i);
    }
    return ans;
}

// generated by oj-template v4.8.1 (https://github.com/online-judge-tools/template-generator)
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int N, M;
    int64_t P;
    std::cin >> N;
    std::vector<int64_t> A(N);
    std::cin >> M;
    std::vector<int64_t> B(M);
    std::cin >> P;
    REP(i, N)
    {
        std::cin >> A[i];
    }
    REP(i, M)
    {
        std::cin >> B[i];
    }
    auto ans = solve(N, M, P, A, B);
    std::cout << ans << '\n';
    return 0;
}
