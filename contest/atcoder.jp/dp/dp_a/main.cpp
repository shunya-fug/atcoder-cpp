#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; (i) < (int)(n); ++(i))
#define REP3(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define REP_R(i, n) for (int i = (int)(n)-1; (i) >= 0; --(i))
#define REP3R(i, m, n) for (int i = (int)(n)-1; (i) >= (int)(m); --(i))
#define ALL(x) ::std::begin(x), ::std::end(x)
using namespace std;

int64_t solve(int N, const std::vector<int64_t> &h)
{
    vector<int64_t> cost(N, 1e18);
    cost.front() = 0;
    REP(i, N - 1)
    {
        cost[i + 1] = min(cost[i + 1], cost[i] + abs(h[i] - h[i + 1]));
        if (i + 2 < cost.size())
        {
            cost[i + 2] = min(cost[i + 2], cost[i] + abs(h[i] - h[i + 2]));
        }
    }
    return cost.back();
}

// generated by oj-template v4.8.1 (https://github.com/online-judge-tools/template-generator)
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int N;
    std::cin >> N;
    std::vector<int64_t> h(N);
    REP(i, N)
    {
        std::cin >> h[i];
    }
    auto ans = solve(N, h);
    std::cout << ans << '\n';
    return 0;
}
