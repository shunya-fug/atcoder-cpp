#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; (i) < (int)(n); ++(i))
#define REP3(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define REP_R(i, n) for (int i = (int)(n)-1; (i) >= 0; --(i))
#define REP3R(i, m, n) for (int i = (int)(n)-1; (i) >= (int)(m); --(i))
#define ALL(x) ::std::begin(x), ::std::end(x)
using namespace std;
#include <boost/range/algorithm.hpp>

char solve(string S, int64_t K)
{
    REP(i, S.size())
    {
        if (i + 1 == K || S[i] != '1')
        {
            return S[i];
        }
    }
    return '0';
}

// generated by oj-template v4.8.1 (https://github.com/online-judge-tools/template-generator)
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    string S;
    int64_t K;
    std::cin >> S >> K;
    auto ans = solve(S, K);
    std::cout << ans << '\n';
    return 0;
}
