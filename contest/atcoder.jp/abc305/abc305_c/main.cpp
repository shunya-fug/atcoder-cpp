#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; (i) < (int)(n); ++(i))
#define REP3(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define REP_R(i, n) for (int i = (int)(n)-1; (i) >= 0; --(i))
#define REP3R(i, m, n) for (int i = (int)(n)-1; (i) >= (int)(m); --(i))
#define ALL(x) ::std::begin(x), ::std::end(x)
using namespace std;

std::pair<int64_t, int64_t> solve(int H, int W, const std::vector<string> &S)
{
    int t = -1,
        b = -1,
        l = 1e9,
        r = -1;
    REP(i, S.size())
    {
        if (S[i].find('#') != string::npos)
        {
            if (t == -1)
            {
                t = i;
            }
            b = max(b, i);
            l = min(l, (int)S[i].find('#'));
            r = max(r, (int)S[i].rfind('#'));
        }
    }

    REP3(i, t, b + 1)
    REP3(j, l, r + 1)
    {
        if (S[i][j] == '.')
        {
            return {i + 1, j + 1};
        }
    }
    return {0, 0};
}

// generated by oj-template v4.8.1 (https://github.com/online-judge-tools/template-generator)
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int H, W;
    std::cin >> H >> W;
    std::vector<string> S(H);
    REP(i, H)
    {
        std::cin >> S[i];
    }
    auto [a, b] = solve(H, W, S);
    std::cout << a << ' ' << b << '\n';
    return 0;
}
