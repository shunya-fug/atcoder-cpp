#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; (i) < (int)(n); ++ (i))
#define REP3(i, m, n) for (int i = (m); (i) < (int)(n); ++ (i))
#define REP_R(i, n) for (int i = (int)(n) - 1; (i) >= 0; -- (i))
#define REP3R(i, m, n) for (int i = (int)(n) - 1; (i) >= (int)(m); -- (i))
#define ALL(x) ::std::begin(x), ::std::end(x)
using namespace std;


auto solve(int64_t N, int Q, const std::vector<int64_t> &T, const std::vector<int64_t> &X, const std::vector<int64_t> &Y, const std::vector<int64_t> &V) {
    // TODO: edit here
}

// generated by oj-template v4.8.1 (https://github.com/online-judge-tools/template-generator)
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int64_t N;
    int Q;
    std::cin >> N >> Q;
    std::vector<int64_t> T(Q), X(Q), Y(Q), V(Q);
    REP (i, Q) {
        std::cin >> T[i] >> X[i] >> Y[i] >> V[i];
    }
    auto ans = solve(N, Q, T, X, Y, V);
    // failed to analyze output format
    // TODO: edit here
    std::cout << ans << '\n';
    return 0;
}