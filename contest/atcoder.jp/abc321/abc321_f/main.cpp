#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; (i) < (int)(n); ++ (i))
#define REP3(i, m, n) for (int i = (m); (i) < (int)(n); ++ (i))
#define REP_R(i, n) for (int i = (int)(n) - 1; (i) >= 0; -- (i))
#define REP3R(i, m, n) for (int i = (int)(n) - 1; (i) >= (int)(m); -- (i))
#define ALL(x) ::std::begin(x), ::std::end(x)
using namespace std;

constexpr int64_t MOD = 998244353;
auto solve(int a, const std::vector<int64_t> &b, const std::vector<char> &c, int64_t d) {
    // TODO: edit here
}

// generated by oj-template v4.8.1 (https://github.com/online-judge-tools/template-generator)
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int a;
    int64_t d;
    std::cin >> a;
    std::vector<int64_t> b(a);
    std::vector<char> c(a);
    REP (i, a) {
        std::cin >> b[i] >> c[i];
    }
    std::cin >> d;
    auto ans = solve(a, b, c, d);
    REP (i, a) {
        std::cout << e[i] << '\n';
    }
    return 0;
}
