#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; (i) < (int)(n); ++ (i))
#define REP3(i, m, n) for (int i = (m); (i) < (int)(n); ++ (i))
#define REP_R(i, n) for (int i = (int)(n) - 1; (i) >= 0; -- (i))
#define REP3R(i, m, n) for (int i = (int)(n) - 1; (i) >= (int)(m); -- (i))
#define ALL(x) ::std::begin(x), ::std::end(x)
using namespace std;


auto solve(int N, int64_t X, int64_t Y, const std::vector<int64_t> &P, const std::vector<int64_t> &T, int Q, const std::vector<int64_t> &q) {
    // TODO: edit here
}

// generated by oj-template v4.8.1 (https://github.com/online-judge-tools/template-generator)
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int N;
    int64_t X, Y;
    int Q;
    std::cin >> N;
    std::vector<int64_t> P(N - 1), T(N - 1);
    std::cin >> X >> Y;
    REP (i, N - 1) {
        std::cin >> P[i] >> T[i];
    }
    std::cin >> Q;
    std::vector<int64_t> q(Q);
    REP (i, Q) {
        std::cin >> q[i];
    }
    auto ans = solve(N, X, Y, P, T, Q, q);
    REP (i, Q) {
        std::cout << a[i] << '\n';
    }
    return 0;
}
