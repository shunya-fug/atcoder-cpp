#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; (i) < (int)(n); ++ (i))
#define REP3(i, m, n) for (int i = (m); (i) < (int)(n); ++ (i))
#define REP_R(i, n) for (int i = (int)(n) - 1; (i) >= 0; -- (i))
#define REP3R(i, m, n) for (int i = (int)(n) - 1; (i) >= (int)(m); -- (i))
#define ALL(x) ::std::begin(x), ::std::end(x)
using namespace std;

const std::string YES = "Yes";
const std::string NO = "No";
bool solve(int64_t R, int64_t C, int N, const std::vector<int64_t> &r, const std::vector<int64_t> &c, const std::vector<int64_t> &a) {
    // TODO: edit here
}

// generated by oj-template v4.8.1 (https://github.com/online-judge-tools/template-generator)
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int64_t R, C;
    int N;
    std::cin >> R >> C >> N;
    std::vector<int64_t> r(N), c(N), a(N);
    REP (i, N) {
        std::cin >> r[i] >> c[i] >> a[i];
    }
    auto ans = solve(R, C, N, r, c, a);
    std::cout << (ans ? YES : NO) << '\n';
    return 0;
}
