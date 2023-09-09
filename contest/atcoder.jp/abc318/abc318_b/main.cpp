#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; (i) < (int)(n); ++(i))
#define REP3(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define REP_R(i, n) for (int i = (int)(n)-1; (i) >= 0; --(i))
#define REP3R(i, m, n) for (int i = (int)(n)-1; (i) >= (int)(m); --(i))
#define ALL(x) ::std::begin(x), ::std::end(x)
using namespace std;

int64_t solve(int N, const std::vector<int64_t> &A, const std::vector<int64_t> &B, const std::vector<int64_t> &C, const std::vector<int64_t> &D)
{
    vector<vector<int64_t>> wrapped(100, vector<int64_t>(100));
    REP(n, N)
    {
        for (auto i = A[n]; i < B[n]; i++)
        {
            for (auto j = C[n]; j < D[n]; j++)
            {
                wrapped[i][j] = 1;
            }
        }
    }

    int64_t ans = 0;
    REP(i, 100)
    {
        REP(j, 100)
        {
            ans += wrapped[i][j];
        }
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
    std::vector<int64_t> A(N), B(N), C(N), D(N);
    REP(i, N)
    {
        std::cin >> A[i] >> B[i] >> C[i] >> D[i];
    }
    auto ans = solve(N, A, B, C, D);
    std::cout << ans << '\n';
    return 0;
}