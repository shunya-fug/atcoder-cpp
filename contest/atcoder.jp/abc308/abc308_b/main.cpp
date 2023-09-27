#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; (i) < (int)(n); ++ (i))
#define REP3(i, m, n) for (int i = (m); (i) < (int)(n); ++ (i))
#define REP_R(i, n) for (int i = (int)(n) - 1; (i) >= 0; -- (i))
#define REP3R(i, m, n) for (int i = (int)(n) - 1; (i) >= (int)(m); -- (i))
#define ALL(x) ::std::begin(x), ::std::end(x)
using namespace std;


int64_t solve(int N, int M, const std::vector<std::string> &C, const std::vector<std::string> &D, const std::vector<int64_t> &P) {
    // TODO: edit here
}

// generated by oj-template v4.8.1 (https://github.com/online-judge-tools/template-generator)
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int N, M;
    std::cin >> N;
    std::vector<std::string> C(N);
    std::cin >> M;
    std::vector<std::string> D(M);
    std::vector<int64_t> P(M + 1);
    REP (i, N) {
        std::cin >> C[i];
    }
    REP (i, M) {
        std::cin >> D[i];
    }
    REP (i, M + 1) {
        std::cin >> P[i];
    }
    auto ans = solve(N, M, C, D, P);
    std::cout << ans << '\n';
    return 0;
}
