#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; (i) < (int)(n); ++(i))
#define REP3(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define REP_R(i, n) for (int i = (int)(n)-1; (i) >= 0; --(i))
#define REP3R(i, m, n) for (int i = (int)(n)-1; (i) >= (int)(m); --(i))
#define ALL(x) ::std::begin(x), ::std::end(x)
using namespace std;

int64_t solve(std::string S)
{
    int64_t ans = 0;
    REP(i, S.size() - 1)
    {
        REP3(l, 1, S.size() + 1 - i)
        {
            auto s = S.substr(i, l), s_rev = s;
            reverse(ALL(s_rev));
            if (s == s_rev)
            {
                ans = max(ans, (int64_t)s.size());
            }
        }
    }
    return ans;
}

// generated by oj-template v4.8.1 (https://github.com/online-judge-tools/template-generator)
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::string S;
    std::cin >> S;
    auto ans = solve(S);
    std::cout << ans << '\n';
    return 0;
}
