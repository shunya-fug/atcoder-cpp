#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; (i) < (int)(n); ++ (i))
#define REP3(i, m, n) for (int i = (m); (i) < (int)(n); ++ (i))
#define REP_R(i, n) for (int i = (int)(n) - 1; (i) >= 0; -- (i))
#define REP3R(i, m, n) for (int i = (int)(n) - 1; (i) >= (int)(m); -- (i))
#define ALL(x) ::std::begin(x), ::std::end(x)
using namespace std;

constexpr int64_t MOD = 1000000007;
int64_t solve(int64_t N, int Q, const std::vector<int64_t> &x, const std::vector<int64_t> &y, const std::vector<int64_t> &z, const std::vector<int64_t> &w) {
    // TODO: edit here
}

// generated by oj-template v4.8.1 (https://github.com/online-judge-tools/template-generator)
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int64_t N;
    int Q;
    std::cin >> N >> Q;
    std::vector<int64_t> x(Q), y(Q), z(Q), w(Q);
    REP (i, Q) {
        std::cin >> x[i] >> y[i] >> z[i] >> w[i];
    }
    auto ans = solve(N, Q, x, y, z, w);
    std::cout << ans << '\n';
    return 0;
}
