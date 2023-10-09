#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; (i) < (int)(n); ++ (i))
#define REP3(i, m, n) for (int i = (m); (i) < (int)(n); ++ (i))
#define REP_R(i, n) for (int i = (int)(n) - 1; (i) >= 0; -- (i))
#define REP3R(i, m, n) for (int i = (int)(n) - 1; (i) >= (int)(m); -- (i))
#define ALL(x) ::std::begin(x), ::std::end(x)
using namespace std;

const std::string YES = "Yes";
const std::string NO = "No";
auto solve(int64_t N, int M, const std::vector<int64_t> &u, const std::vector<int64_t> &v, int K, const std::vector<int64_t> &x, const std::vector<int64_t> &y, int Q, const std::vector<int64_t> &p, const std::vector<int64_t> &q) {
    // TODO: edit here
}

// generated by oj-template v4.8.1 (https://github.com/online-judge-tools/template-generator)
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int64_t N;
    int M, K, Q;
    std::cin >> N >> M;
    std::vector<int64_t> u(M), v(M);
    REP (i, M) {
        std::cin >> u[i] >> v[i];
    }
    std::cin >> K;
    std::vector<int64_t> x(K), y(K);
    REP (i, K) {
        std::cin >> x[i] >> y[i];
    }
    std::cin >> Q;
    std::vector<int64_t> p(Q), q(Q);
    REP (i, Q) {
        std::cin >> p[i] >> q[i];
    }
    auto ans = solve(N, M, u, v, K, x, y, Q, p, q);
    REP (i, Q) {
        std::cout << a[i] << '\n';
    }
    return 0;
}
