#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; (i) < (int)(n); ++ (i))
#define REP3(i, m, n) for (int i = (m); (i) < (int)(n); ++ (i))
#define REP_R(i, n) for (int i = (int)(n) - 1; (i) >= 0; -- (i))
#define REP3R(i, m, n) for (int i = (int)(n) - 1; (i) >= (int)(m); -- (i))
#define ALL(x) ::std::begin(x), ::std::end(x)
using namespace std;

const std::string YES = "Yes";
const std::string NO = "No";
auto solve(int a, const std::vector<int64_t> &b, const std::vector<int64_t> &c, const std::vector<std::vector<int64_t> > &d, const std::vector<std::vector<int64_t> > &e) {
    // TODO: edit here
}

// generated by oj-template v4.8.1 (https://github.com/online-judge-tools/template-generator)
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int a;
    std::cin >> a;
    std::vector<int64_t> b(a), c(a);
    std::vector<std::vector<int64_t> > d(a, std::vector<int64_t>((c_i))), e(a, std::vector<int64_t>((c_i)));
    REP (i, a) {
        std::cin >> b[i] >> c[i];
        REP (j, c_i) {
            std::cin >> d[i][j] >> e[i][j];
        }
    }
    auto ans = solve(a, b, c, d, e);
    REP (i, a) {
        std::cout << f[i] << '\n';
    }
    return 0;
}