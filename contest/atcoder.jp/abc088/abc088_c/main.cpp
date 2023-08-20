#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; (i) < (int)(n); ++(i))
#define REP3(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define REP_R(i, n) for (int i = (int)(n)-1; (i) >= 0; --(i))
#define REP3R(i, m, n) for (int i = (int)(n)-1; (i) >= (int)(m); --(i))
#define ALL(x) ::std::begin(x), ::std::end(x)
using namespace std;

const int N = 3;
const std::string YES = "Yes";
const std::string NO = "No";
bool solve(std::vector<vector<int64_t>> c)
{
    REP(i, N)
    {
        int64_t a = *min_element(ALL(c[i]));
        REP(j, N)
        {
            c[i][j] -= a;
        }
    }

    REP(j, N)
    {
        int64_t a = (*min_element(ALL(c), [&](auto &row1, auto &row2)
                                  { return row1[j] < row2[j]; }))[j];
        REP(i, N)
        {
            c[i][j] -= a;
        }
    }

    REP(i, N)
    {
        REP(j, N)
        {
            if (c[i][j] != 0)
            {
                return false;
            }
        }
    }
    return true;
}

// generated by oj-template v4.8.1 (https://github.com/online-judge-tools/template-generator)
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::vector<vector<int64_t>> c(N, vector<int64_t>(N));
    REP(i, N)
    {
        REP(j, N)
        {
            std::cin >> c[i][j];
        }
    }
    auto ans = solve(c);
    std::cout << (ans ? YES : NO) << '\n';
    return 0;
}
