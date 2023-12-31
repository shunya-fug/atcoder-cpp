#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; (i) < (int)(n); ++(i))
#define REP3(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define REP_R(i, n) for (int i = (int)(n)-1; (i) >= 0; --(i))
#define REP3R(i, m, n) for (int i = (int)(n)-1; (i) >= (int)(m); --(i))
#define ALL(x) ::std::begin(x), ::std::end(x)
using namespace std;

class Pos
{
public:
    int64_t row;
    int64_t col;

    Pos moved(int64_t dx, int64_t dy)
    {
        return Pos(row + dy, col + dx);
    }
};

class Query
{
public:
    int64_t cost;
    char direction;
    Pos current;

    const bool operator<(const auto &another) const
    {
        return cost < another.cost;
    }
};

const string direction = "^v<>";
const vector<int64_t> dx = {0, 0, -1, 1};
const vector<int64_t> dy = {-1, 1, 0, 0};

int64_t solve(int H, int W, Pos start, Pos target, const std::vector<vector<char>> &grid)
{
    vector<vector<vector<int64_t>>> count(H, vector<vector<int64_t>>(W, vector<int64_t>(4, 1e9)));
    deque<Query> Q;
    REP(i, direction.size())
    {
        count[start.row][start.col][i] = 0;
        Q.push_back(Query(0, direction[i], start));
    }

    while (!Q.empty())
    {
        auto [cost, src_direction, src] = Q.front();
        Q.pop_front();
        REP(i, direction.size())
        {
            auto dst = src.moved(dx[i], dy[i]);
            auto dst_cost = cost;
            if (src_direction != direction[i])
            {
                dst_cost++;
            }
            if (0 <= dst.row and dst.row < grid.size() and 0 <= dst.col and dst.col < grid[0].size() and grid[dst.row][dst.col] == '.' and dst_cost < count[dst.row][dst.col][i])
            {
                if (cost == dst_cost)
                {
                    Q.push_front(Query(dst_cost, direction[i], dst));
                }
                else
                {
                    Q.push_back(Query(dst_cost, direction[i], dst));
                }
                count[dst.row][dst.col][i] = dst_cost;
            }
        }
    }

    return *ranges::min_element(count[target.row][target.col]);
}

// generated by oj-template v4.8.1 (https://github.com/online-judge-tools/template-generator)
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int H, W;
    std::cin >> H >> W;
    Pos start, target;
    cin >> start.row >> start.col;
    cin >> target.row >> target.col;
    start = start.moved(-1, -1);
    target = target.moved(-1, -1);
    vector<vector<char>> grid(H, vector<char>(W));
    REP(i, H)
    {
        REP(j, W)
        {
            std::cin >> grid[i][j];
        }
    }
    auto ans = solve(H, W, start, target, grid);
    std::cout << ans << '\n';
    return 0;
}
