#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; (i) < (int)(n); ++(i))
#define REP3(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define REP_R(i, n) for (int i = (int)(n)-1; (i) >= 0; --(i))
#define REP3R(i, m, n) for (int i = (int)(n)-1; (i) >= (int)(m); --(i))
#define ALL(x) ::std::begin(x), ::std::end(x)
using namespace std;
#include <boost/algorithm/string.hpp>

vector<string> solve(int N, const std::vector<int64_t> &A, const std::vector<int64_t> &B)
{
    vector<vector<int64_t>> G(N + 1);
    REP(i, N - 1)
    {
        G[A[i]].push_back(B[i]);
        G[B[i]].push_back(A[i]);
    }

    vector<int64_t> color(N + 1, -1);
    vector<int64_t> zeros, ones;
    queue<int64_t> Q;
    color[1] = 0;
    Q.push(1);
    zeros.push_back(1);
    while (!Q.empty())
    {
        auto p = Q.front();
        Q.pop();
        for (auto np : G[p])
        {
            if (color[np] == -1)
            {
                color[np] = (color[p] + 1) % 2;
                switch (color[np])
                {
                case 0:
                    zeros.push_back(np);
                    break;
                case 1:
                    ones.push_back(np);
                    break;
                }
                Q.push(np);
            }
        }
    }

    vector<string> ans;
    for (auto x : (zeros.size() > ones.size() ? zeros : ones) |
                      views::transform([](auto x)
                                       { return to_string(x); }) |
                      views::take(N / 2))
    {
        ans.push_back(x);
    }
    return ans;
}

// generated by oj-template v4.8.1 (https://github.com/online-judge-tools/template-generator)
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int N;
    std::cin >> N;
    std::vector<int64_t> A(N - 1), B(N - 1);
    REP(i, N - 1)
    {
        std::cin >> A[i] >> B[i];
    }
    auto ans = solve(N, A, B);
    std::cout << boost::join(ans, " ") << '\n';
    return 0;
}
