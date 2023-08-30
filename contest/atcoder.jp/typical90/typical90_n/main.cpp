#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; (i) < (int)(n); ++(i))
#define REP3(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define REP_R(i, n) for (int i = (int)(n)-1; (i) >= 0; --(i))
#define REP3R(i, m, n) for (int i = (int)(n)-1; (i) >= (int)(m); --(i))
#define ALL(x) ::std::begin(x), ::std::end(x)
using namespace std;

int64_t solve(int N, std::vector<int64_t> &A, std::vector<int64_t> &B)
{
    sort(ALL(A));
    sort(ALL(B));

    int64_t ans = 0;
    REP(i, N)
    {
        ans += abs(A[i] - B[i]);
    }

    return ans;
}

// generated by oj-template v4.8.1 (https://github.com/online-judge-tools/template-generator)
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int N;
    std::cin >> N;
    std::vector<int64_t> A(N), B(N);
    REP(i, N)
    {
        std::cin >> A[i];
    }
    REP(i, N)
    {
        std::cin >> B[i];
    }
    auto ans = solve(N, A, B);
    std::cout << ans << '\n';
    return 0;
}
