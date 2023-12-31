#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; (i) < (int)(n); ++(i))
#define REP3(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define REP_R(i, n) for (int i = (int)(n)-1; (i) >= 0; --(i))
#define REP3R(i, m, n) for (int i = (int)(n)-1; (i) >= (int)(m); --(i))
#define ALL(x) ::std::begin(x), ::std::end(x)
using namespace std;

const std::string YES = "Yes";
const std::string NO = "No";
const vector<int> dx = {0, 0, -1, 1};
const vector<int> dy = {-1, 1, 0, 0};
bool solve(int H, int W, const std::vector<std::string> &S)
{
    const string route = "snuke";
    if (S.front().front() != route.front())
    {
        return false;
    }
    auto get_next_char = [&](char current)
    {
        return route[(route.find(current) + 1) % route.size()];
    };

    vector<vector<bool>> reached(H, vector<bool>(W, false));
    queue<pair<int, int>> Q;
    Q.push({0, 0});
    while (!Q.empty())
    {
        auto [x, y] = Q.front();
        Q.pop();

        REP(i, dx.size())
        {
            auto nx = x + dx[i],
                 ny = y + dy[i];
            if (0 <= nx and nx < W and 0 <= ny and ny < H and !reached[ny][nx] and S[ny][nx] == get_next_char(S[y][x]))
            {
                Q.push({nx, ny});
                reached[ny][nx] = true;
            }
        }
    }
    return reached.back().back();
}

// generated by oj-template v4.8.1 (https://github.com/online-judge-tools/template-generator)
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int H, W;
    std::cin >> H >> W;
    std::vector<std::string> S(H);
    REP(i, H)
    {
        std::cin >> S[i];
    }
    auto ans = solve(H, W, S);
    std::cout << (ans ? YES : NO) << '\n';
    return 0;
}
