#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; (i) < (int)(n); ++ (i))
#define REP3(i, m, n) for (int i = (m); (i) < (int)(n); ++ (i))
#define REP_R(i, n) for (int i = (int)(n) - 1; (i) >= 0; -- (i))
#define REP3R(i, m, n) for (int i = (int)(n) - 1; (i) >= (int)(m); -- (i))
#define ALL(x) ::std::begin(x), ::std::end(x)
using namespace std;


auto solve(auto a, const std::vector<auto> &b, const std::vector<std::vector<auto> > &c) {
    // TODO: edit here
}

// generated by oj-template v4.8.1 (https://github.com/online-judge-tools/template-generator)
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    auto a;
    std::cin >> a;
    std::vector<auto> b(a);
    std::vector<std::vector<auto> > c(a, std::vector<auto>((b_i)));
    REP (i, a) {
        std::cin >> b[i];
        REP (j, b_i) {
            std::cin >> c[i][j];
        }
    }
    auto ans = solve(a, b, c);
    REP (i, N - 1) {
        std::cout << u[i] << ' ' << v[i] << '\n';
    }
    return 0;
}
