#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; (i) < (int)(n); ++ (i))
#define REP3(i, m, n) for (int i = (m); (i) < (int)(n); ++ (i))
#define REP_R(i, n) for (int i = (int)(n) - 1; (i) >= 0; -- (i))
#define REP3R(i, m, n) for (int i = (int)(n) - 1; (i) >= (int)(m); -- (i))
#define ALL(x) ::std::begin(x), ::std::end(x)
using namespace std;


auto solve(int64_t N, int M, const std::vector<int64_t> &U, const std::vector<int64_t> &V, const std::vector<int64_t> &W, int K, const std::vector<int64_t> &A, int D, const std::vector<int64_t> &X) {
    // TODO: edit here
}

// generated by oj-template v4.8.1 (https://github.com/online-judge-tools/template-generator)
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int64_t N;
    int M, K, D;
    std::cin >> N >> M;
    std::vector<int64_t> U(M), V(M), W(M);
    REP (i, M) {
        std::cin >> U[i] >> V[i] >> W[i];
    }
    std::cin >> K;
    std::vector<int64_t> A(K);
    REP (i, K) {
        std::cin >> A[i];
    }
    std::cin >> D;
    std::vector<int64_t> X(D);
    REP (i, D) {
        std::cin >> X[i];
    }
    auto ans = solve(N, M, U, V, W, K, A, D, X);
    REP (i, N) {
        std::cout << ans[i] << '\n';
    }
    return 0;
}