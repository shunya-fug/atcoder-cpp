#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; (i) < (int)(n); ++ (i))
#define REP3(i, m, n) for (int i = (m); (i) < (int)(n); ++ (i))
#define REP_R(i, n) for (int i = (int)(n) - 1; (i) >= 0; -- (i))
#define REP3R(i, m, n) for (int i = (int)(n) - 1; (i) >= (int)(m); -- (i))
#define ALL(x) ::std::begin(x), ::std::end(x)
using namespace std;

constexpr int64_t MOD = 1000000007;
auto solve(int Q, const std::vector<int64_t> &X, const std::vector<int64_t> &Y) {
    // TODO: edit here
}

// generated by oj-template v4.8.1 (https://github.com/online-judge-tools/template-generator)
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int Q;
    std::cin >> Q;
    std::vector<int64_t> X(Q), Y(Q);
    REP (i, Q) {
        std::cin >> X[i] >> Y[i];
    }
    auto ans = solve(Q, X, Y);
    // failed to analyze output format
    // TODO: edit here
    std::cout << ans << '\n';
    return 0;
}