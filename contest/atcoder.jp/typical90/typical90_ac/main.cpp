#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; (i) < (int)(n); ++(i))
#define REP3(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define REP_R(i, n) for (int i = (int)(n)-1; (i) >= 0; --(i))
#define REP3R(i, m, n) for (int i = (int)(n)-1; (i) >= (int)(m); --(i))
#define ALL(x) ::std::begin(x), ::std::end(x)
using namespace std;

vector<int64_t> solve(int64_t W, int64_t N, std::vector<int64_t> &L, std::vector<int64_t> &R)
{
    // 座標圧縮
    vector<int64_t> compression;
    REP(i, N)
    {
        compression.push_back(L[i]);
        compression.push_back(R[i]);
    }
    ranges::sort(compression);
    compression.erase(unique(ALL(compression)), end(compression));
    REP(i, N)
    {
        L[i] = ranges::lower_bound(compression, L[i]) - begin(compression);
        R[i] = ranges::lower_bound(compression, R[i]) - begin(compression);
    }

    vector<int64_t> heights(compression.size(), 0), ans(N);
    REP(i, N)
    {
        auto h = *max_element(begin(heights) + L[i], begin(heights) + R[i] + 1) + 1;
        fill(begin(heights) + L[i], begin(heights) + R[i] + 1, h);
        ans[i] = h;
    }
    return ans;
}

// generated by oj-template v4.8.1 (https://github.com/online-judge-tools/template-generator)
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int64_t W, N;
    std::cin >> W >> N;
    std::vector<int64_t> L(N), R(N);
    REP(i, N)
    {
        std::cin >> L[i] >> R[i];
    }
    auto ans = solve(W, N, L, R);
    REP(i, N)
    {
        std::cout << ans[i] << '\n';
    }
    return 0;
}
