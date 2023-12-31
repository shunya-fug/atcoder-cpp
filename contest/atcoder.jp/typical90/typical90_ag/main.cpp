#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; (i) < (int)(n); ++(i))
#define REP3(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define REP_R(i, n) for (int i = (int)(n)-1; (i) >= 0; --(i))
#define REP3R(i, m, n) for (int i = (int)(n)-1; (i) >= (int)(m); --(i))
#define ALL(x) ::std::begin(x), ::std::end(x)
using namespace std;

int64_t solve(int64_t H, int64_t W)
{
    if (H == 1 || W == 1)
    {
        return H * W;
    }

    int64_t ans = 0;
    vector<vector<char>> lights(H + 2, vector<char>(W + 2, '.'));

    REP3(i, 1, H + 1)
    {
        REP3(j, 1, W + 1)
        {
            bool complete = true;
            REP3(l, -1, 2)
            {
                REP3(m, -1, 2)
                {
                    if (l == 0 && m == 0)
                        continue;

                    if (lights[i + l][j + m] == '#')
                    {
                        complete = false;
                    }
                }
            }

            if (complete)
            {
                lights[i][j] = '#';
                ans++;
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
    int64_t H, W;
    std::cin >> H >> W;
    auto ans = solve(H, W);
    std::cout << ans << '\n';
    return 0;
}
