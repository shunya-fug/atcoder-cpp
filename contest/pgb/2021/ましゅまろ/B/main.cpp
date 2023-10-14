#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; (i) < (int)(n); ++(i))
#define REP3(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define REP_R(i, n) for (int i = (int)(n)-1; (i) >= 0; --(i))
#define REP3R(i, m, n) for (int i = (int)(n)-1; (i) >= (int)(m); --(i))
#define ALL(x) ::std::begin(x), ::std::end(x)
using namespace std;

string solve(string X)
{
    auto i = X.find('0');
    if (i == string::npos)
    {
        return X;
    }

    REP3(j, i, X.size())
    {
        X[j] = '1';
    }
    return X;
}

// generated by oj-template v4.8.1 (https://github.com/online-judge-tools/template-generator)
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    string X;
    std::cin >> X;
    auto ans = solve(X);
    std::cout << ans << '\n';
    return 0;
}
