#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; (i) < (int)(n); ++(i))
#define REP3(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define REP_R(i, n) for (int i = (int)(n)-1; (i) >= 0; --(i))
#define REP3R(i, m, n) for (int i = (int)(n)-1; (i) >= (int)(m); --(i))
#define ALL(x) ::std::begin(x), ::std::end(x)
using namespace std;

string solve(std::string s, std::string t)
{
    // dp[sのi文字目][tのj文字目] = LCSの長さ
    vector<vector<int64_t>> dp(s.size() + 1, vector<int64_t>(t.size() + 1));
    REP(i, s.size())
    {
        REP(j, t.size())
        {
            if (s[i] == t[j])
            {
                dp[i + 1][j + 1] = max(dp[i + 1][j + 1], dp[i][j] + 1);
            }
            dp[i + 1][j + 1] = max({dp[i + 1][j + 1], dp[i + 1][j], dp[i][j + 1]});
        }
    }

    // 復元
    string ans = "";
    auto i = s.size(),
         j = t.size();
    while (i > 0 and j > 0)
    {
        if (dp[i][j] == dp[i - 1][j])
        {
            i--;
        }
        else if (dp[i][j] == dp[i][j - 1])
        {
            j--;
        }
        else
        {
            ans = s[i - 1] + ans;
            i--;
            j--;
        }
    }
    return ans;
}

// generated by oj-template v4.8.1 (https://github.com/online-judge-tools/template-generator)
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::string s, t;
    std::cin >> s >> t;
    auto ans = solve(s, t);
    std::cout << ans << '\n';
    return 0;
}