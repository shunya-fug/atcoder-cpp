#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; (i) < (int)(n); ++ (i))
#define REP3(i, m, n) for (int i = (m); (i) < (int)(n); ++ (i))
#define REP_R(i, n) for (int i = (int)(n) - 1; (i) >= 0; -- (i))
#define REP3R(i, m, n) for (int i = (int)(n) - 1; (i) >= (int)(m); -- (i))
#define ALL(x) ::std::begin(x), ::std::end(x)
using namespace std;


auto solve(int64_t T, int64_t L, int64_t X, int64_t Y, int Q, const std::vector<int64_t> &E) {
    // TODO: edit here
}

// generated by oj-template v4.8.1 (https://github.com/online-judge-tools/template-generator)
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int64_t T, L, X, Y;
    int Q;
    std::cin >> T >> L >> X >> Y >> Q;
    std::vector<int64_t> E(Q);
    REP (i, Q) {
        std::cin >> E[i];
    }
    auto ans = solve(T, L, X, Y, Q, E);
    REP (i, Q) {
        std::cout << a[i] << '\n';
    }
    return 0;
}
