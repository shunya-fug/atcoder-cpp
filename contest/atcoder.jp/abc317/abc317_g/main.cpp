#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; (i) < (int)(n); ++ (i))
#define REP3(i, m, n) for (int i = (m); (i) < (int)(n); ++ (i))
#define REP_R(i, n) for (int i = (int)(n) - 1; (i) >= 0; -- (i))
#define REP3R(i, m, n) for (int i = (int)(n) - 1; (i) >= (int)(m); -- (i))
#define ALL(x) ::std::begin(x), ::std::end(x)
using namespace std;

const std::string YES = "Yes";
auto solve(int N, int M, const std::vector<std::vector<int64_t> > &A) {
    // TODO: edit here
}

// generated by oj-template v4.8.1 (https://github.com/online-judge-tools/template-generator)
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int N, M;
    std::cin >> N >> M;
    std::vector<std::vector<int64_t> > A(N, std::vector<int64_t>((M)));
    REP (j, N) {
        REP (i, M) {
            std::cin >> A[j][i];
        }
    }
    auto ans = solve(N, M, A);
    REP (i, N) {
        std::cout << c[i] << '\n';
        REP (j, i) {
            std::cout << e[i][j] << ' ';
        }
    }
    std::cout << f << '\n';
    return 0;
}
