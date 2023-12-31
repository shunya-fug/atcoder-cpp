#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; (i) < (int)(n); ++(i))
#define REP3(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define REP_R(i, n) for (int i = (int)(n)-1; (i) >= 0; --(i))
#define REP3R(i, m, n) for (int i = (int)(n)-1; (i) >= (int)(m); --(i))
#define ALL(x) ::std::begin(x), ::std::end(x)
using namespace std;

vector<int64_t> solve(int N, int M, const std::vector<int64_t> &A, const std::vector<int64_t> &B, const std::vector<int64_t> &C)
{
    // index: 出発地点, first: 行き先, second: 距離
    vector<vector<pair<int64_t, int64_t>>> G(N + 1, vector<pair<int64_t, int64_t>>());
    REP(i, M)
    {
        G[A[i]].push_back({B[i], C[i]});
        G[B[i]].push_back({A[i], C[i]});
    }

    // first: 距離, second: 街
    priority_queue<
        pair<int64_t, int64_t>,
        vector<pair<int64_t, int64_t>>,
        greater<>>
        PQ;

    // 頂点1から頂点iへの最短距離を求める
    vector<int64_t> dist1(N + 1, 1e9);
    dist1[1] = 0;
    PQ.push({0, 1});
    while (!PQ.empty())
    {
        auto from = PQ.top().second;
        PQ.pop();
        for (auto [to, cost] : G[from])
        {
            if (dist1[from] + cost < dist1[to])
            {
                dist1[to] = dist1[from] + cost;
                PQ.push({dist1[to], to});
            }
        }
    }

    // 頂点Nから頂点iへの最短距離を求める
    vector<int64_t> distN(N + 1, 1e9);
    distN[N] = 0;
    PQ.push({0, N});
    while (!PQ.empty())
    {
        auto from = PQ.top().second;
        PQ.pop();
        for (auto [to, cost] : G[from])
        {
            if (distN[from] + cost < distN[to])
            {
                distN[to] = distN[from] + cost;
                PQ.push({distN[to], to});
            }
        }
    }

    // 頂点1から頂点iを経由して頂点Nまで行く最短距離を求める
    vector<int64_t> ans;
    REP3(i, 1, N + 1)
    {
        ans.push_back(dist1[i] + distN[i]);
    }
    return ans;
}

// generated by oj-template v4.8.1 (https://github.com/online-judge-tools/template-generator)
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int N, M;
    std::cin >> N >> M;
    std::vector<int64_t> A(M), B(M), C(M);
    REP(i, M)
    {
        std::cin >> A[i] >> B[i] >> C[i];
    }
    auto ans = solve(N, M, A, B, C);
    REP(i, N)
    {
        std::cout << ans[i] << '\n';
    }
    return 0;
}
