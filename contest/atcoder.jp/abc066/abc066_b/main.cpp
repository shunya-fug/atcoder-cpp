#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; (i) < (int)(n); ++(i))
#define REP3(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define REP_R(i, n) for (int i = (int)(n)-1; (i) >= 0; --(i))
#define REP3R(i, m, n) for (int i = (int)(n)-1; (i) >= (int)(m); --(i))
#define ALL(x) ::std::begin(x), ::std::end(x)
using namespace std;

int64_t solve(std::string S)
{
    for (auto it = S.rbegin() + 1; it != S.rend(); ++it)
    {
        string s = S.substr(0, S.size() - (it - S.rbegin()));
        string left = s.substr(0, s.size() / 2);
        string right = s.substr(s.size() / 2, s.size());
        if (left == right)
        {
            return left.size() + right.size();
        }
    }
    return 0;
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
