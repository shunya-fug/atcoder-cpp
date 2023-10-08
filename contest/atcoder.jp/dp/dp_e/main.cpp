#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; (i) < (int)(n); ++(i))
#define REP3(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define REP_R(i, n) for (int i = (int)(n)-1; (i) >= 0; --(i))
#define REP3R(i, m, n) for (int i = (int)(n)-1; (i) >= (int)(m); --(i))
#define ALL(x) ::std::begin(x), ::std::end(x)
using namespace std;

int64_t solve(int N, int64_t W, const std::vector<int64_t> &w, const std::vector<int64_t> &v)
{
    // dp[価値] = 重さ
    vector<int64_t> dp(reduce(ALL(v)) + 1, 1e18);
    dp[0] = 0;
    REP(i, N)
    {
        REP_R(j, dp.size() - v[i])
        {
            dp[j + v[i]] = min(dp[j + v[i]], dp[j] + w[i]);
        }
    }

    int64_t ans = 0;
    REP_R(v, dp.size())
    {
        if (dp[v] <= W)
        {
            ans = v;
            break;
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
    int64_t W;
    std::cin >> N >> W;
    std::vector<int64_t> w(N), v(N);
    REP(i, N)
    {
        std::cin >> w[i] >> v[i];
    }
    auto ans = solve(N, W, w, v);
    std::cout << ans << '\n';
    return 0;
}