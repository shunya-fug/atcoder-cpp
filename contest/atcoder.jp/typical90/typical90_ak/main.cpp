#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; (i) < (int)(n); ++(i))
#define REP3(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define REP_R(i, n) for (int i = (int)(n)-1; (i) >= 0; --(i))
#define REP3R(i, m, n) for (int i = (int)(n)-1; (i) >= (int)(m); --(i))
#define ALL(x) ::std::begin(x), ::std::end(x)
using namespace std;
#include <atcoder/segtree.hpp>

using S = int64_t;
S op(S l, S r) { return max(l, r); }
S e() { return -1; }
using segtree = atcoder::segtree<S, op, e>;

int64_t solve(int W, int N, const std::vector<int64_t> &L, const std::vector<int64_t> &R, const std::vector<int64_t> &V)
{
    // index: weight
    segtree value(W + 1);
    value.set(0, 0);
    REP(i, N)
    {
        REP3R(w, L[i], W + 1)
        {
            auto maximum_value = value.prod(max(0L, w - R[i]), w - L[i] + 1);
            if (maximum_value != -1)
            {
                value.set(w, max(value.get(w), maximum_value + V[i]));
            }
        }
    }

    return value.get(W);
}

// generated by oj-template v4.8.1 (https://github.com/online-judge-tools/template-generator)
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int W, N;
    std::cin >> W >> N;
    std::vector<int64_t> L(N), R(N), V(N);
    REP(i, N)
    {
        std::cin >> L[i] >> R[i] >> V[i];
    }
    auto ans = solve(W, N, L, R, V);
    std::cout << ans << '\n';
    return 0;
}
