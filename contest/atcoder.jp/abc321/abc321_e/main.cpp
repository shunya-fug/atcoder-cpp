#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; (i) < (int)(n); ++ (i))
#define REP3(i, m, n) for (int i = (m); (i) < (int)(n); ++ (i))
#define REP_R(i, n) for (int i = (int)(n) - 1; (i) >= 0; -- (i))
#define REP3R(i, m, n) for (int i = (int)(n) - 1; (i) >= (int)(m); -- (i))
#define ALL(x) ::std::begin(x), ::std::end(x)
using namespace std;


auto solve(auto a, auto b, auto c, auto d, const std::vector<auto> &e, const std::vector<auto> &f, const std::vector<auto> &g) {
    // TODO: edit here
}

// generated by oj-template v4.8.1 (https://github.com/online-judge-tools/template-generator)
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    auto a, b, c, d;
    std::cin >> a;
    std::vector<auto> e(a), f(a), g(a);
    std::cin >> b >> c >> d;
    REP (i, a) {
        std::cin >> e[i] >> f[i] >> g[i];
    }
    auto ans = solve(a, b, c, d, e, f, g);
    // failed to analyze output format
    // TODO: edit here
    std::cout << ans << '\n';
    return 0;
}