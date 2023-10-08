#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; (i) < (int)(n); ++(i))
#define REP3(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define REP_R(i, n) for (int i = (int)(n)-1; (i) >= 0; --(i))
#define REP3R(i, m, n) for (int i = (int)(n)-1; (i) >= (int)(m); --(i))
#define ALL(x) ::std::begin(x), ::std::end(x)
using namespace std;

int64_t solve(int64_t N, int64_t M, const std::vector<int64_t> &x, const std::vector<int64_t> &y)
{
    vector<vector<int64_t>> G(N + 1, vector<int64_t>());
    REP(i, M)
    {
        G[x[i]].push_back(y[i]);
    }

    vector<int64_t> dp(N + 1, -1);
    auto rec = [&](auto &self, const int64_t &v) -> int64_t
    {
        if (dp[v] != -1)
        {
            return dp[v];
        }

        int64_t result = 0;
        for (auto nv : G[v])
        {
            result = max(result, self(self, nv) + 1);
        }
        return dp[v] = result;
    };

    int64_t ans = 0;
    REP3(v, 1, N + 1)
    {
        ans = max(ans, rec(rec, v));
    }
    return ans;
}

// generated by oj-template v4.8.1 (https://github.com/online-judge-tools/template-generator)
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int64_t N, M;
    std::cin >> N >> M;
    std::vector<int64_t> x(M), y(M);
    REP(i, M)
    {
        std::cin >> x[i] >> y[i];
    }
    auto ans = solve(N, M, x, y);
    std::cout << ans << '\n';
    return 0;
}