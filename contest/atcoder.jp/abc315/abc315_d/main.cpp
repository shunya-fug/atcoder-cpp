#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; (i) < (int)(n); ++(i))
#define REP3(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define REP_R(i, n) for (int i = (int)(n)-1; (i) >= 0; --(i))
#define REP3R(i, m, n) for (int i = (int)(n)-1; (i) >= (int)(m); --(i))
#define ALL(x) ::std::begin(x), ::std::end(x)
using namespace std;

int64_t solve(auto H, auto W, std::vector<std::vector<char>> &cookies)
{
    while (true)
    {
        vector<int> remove_row, remove_col;

        // 1. 各行に対して次の操作を行う : その行に 2 枚以上のクッキーが残っており、それらの色がすべて同じならば、それらに印をつける。
        REP(i, cookies.size())
        {
            if (cookies[i].size() < 2)
                break;

            bool same = true;
            char c = cookies[i][0];
            REP(j, cookies[i].size())
            {
                if (c != cookies[i][j])
                {
                    same = false;
                    break;
                }
            }

            if (same)
            {
                remove_row.push_back(i);
            }
        }

        // 2. 各列に対して次の操作を行う : その列に 2 枚以上のクッキーが残っており、それらの色がすべて同じならば、それらに印をつける。
        REP(j, cookies[0].size())
        {
            if (cookies.size() < 2)
                break;

            bool same = true;
            char c = cookies[0][j];
            REP(i, cookies.size())
            {
                if (c != cookies[i][j])
                {
                    same = false;
                    break;
                }
            }

            if (same)
            {
                remove_col.push_back(j);
            }
        }

        if (remove_row.empty() && remove_col.empty())
        {
            break;
        }

        REP_R(i, remove_row.size())
        {
            cookies.erase(cookies.begin() + remove_row[i]);
        }

        REP_R(j, remove_col.size())
        {
            REP(i, cookies.size())
            {
                cookies[i].erase(cookies[i].begin() + remove_col[j]);
            }
        }
    };

    return cookies.size() * cookies[0].size();
}

// generated by oj-template v4.8.1 (https://github.com/online-judge-tools/template-generator)
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int H, W;
    std::cin >> H >> W;
    std::vector<std::vector<char>> c(H, std::vector<char>(W));
    REP(i, H)
    {
        REP(j, W)
        {
            std::cin >> c[i][j];
        }
    }
    auto ans = solve(H, W, c);
    std::cout << ans << '\n';
    return 0;
}
