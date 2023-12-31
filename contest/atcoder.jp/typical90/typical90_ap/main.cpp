#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; (i) < (int)(n); ++(i))
#define REP3(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define REP_R(i, n) for (int i = (int)(n)-1; (i) >= 0; --(i))
#define REP3R(i, m, n) for (int i = (int)(n)-1; (i) >= (int)(m); --(i))
#define ALL(x) ::std::begin(x), ::std::end(x)
using namespace std;

constexpr int64_t MOD = 1000000007;
int64_t solve(int64_t K)
{
    if (K % 9 != 0)
    {
        return 0;
    }

    vector<int64_t> dp(K + 1, 0);
    dp[0] = 1;
    REP3(i, 1, K + 1)
    {
        REP3(j, 1, min(i, 9) + 1)
        {
            dp[i] += dp[i - j];
            dp[i] %= MOD;
        }
    }
    return dp[K];
}

// generated by oj-template v4.8.1 (https://github.com/online-judge-tools/template-generator)
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int64_t K;
    std::cin >> K;
    auto ans = solve(K);
    std::cout << ans << '\n';
    return 0;
}
