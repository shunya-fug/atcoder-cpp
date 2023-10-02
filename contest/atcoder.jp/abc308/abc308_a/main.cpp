#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; (i) < (int)(n); ++(i))
#define REP3(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define REP_R(i, n) for (int i = (int)(n)-1; (i) >= 0; --(i))
#define REP3R(i, m, n) for (int i = (int)(n)-1; (i) >= (int)(m); --(i))
#define ALL(x) ::std::begin(x), ::std::end(x)
using namespace std;

const std::string YES = "Yes";
const std::string NO = "No";
bool solve(const std::vector<int64_t> &S)
{
    REP(i, S.size() - 1)
    {
        if (S[i] > S[i + 1])
        {
            return false;
        }
    }
    for (auto s : S)
    {
        if (s < 100 or 675 < s or s % 25 != 0)
        {
            return false;
        }
    }
    return true;
}

// generated by oj-template v4.8.1 (https://github.com/online-judge-tools/template-generator)
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::vector<int64_t> S(8);
    REP(i, 8)
    {
        std::cin >> S[i];
    }
    auto ans = solve(S);
    std::cout << (ans ? YES : NO) << '\n';
    return 0;
}