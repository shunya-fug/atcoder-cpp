#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; (i) < (int)(n); ++ (i))
#define REP3(i, m, n) for (int i = (m); (i) < (int)(n); ++ (i))
#define REP_R(i, n) for (int i = (int)(n) - 1; (i) >= 0; -- (i))
#define REP3R(i, m, n) for (int i = (int)(n) - 1; (i) >= (int)(m); -- (i))
#define ALL(x) ::std::begin(x), ::std::end(x)
using namespace std;


std::vector<auto> solve(int N, const std::vector<int64_t> &A, const std::vector<int64_t> &B, const std::vector<int64_t> &U, const std::vector<int64_t> &V) {
    // TODO: edit here
}

// generated by oj-template v4.8.1 (https://github.com/online-judge-tools/template-generator)
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int N;
    std::cin >> N;
    std::vector<int64_t> A(N), B(N), U(N - 1), V(N - 1);
    REP (i, N) {
        std::cin >> A[i] >> B[i];
    }
    REP (i, N - 1) {
        std::cin >> U[i] >> V[i];
    }
    auto ans = solve(N, A, B, U, V);
    REP (i, (int)ans.size()) {
        std::cout << a[i] << ' ';
    }
    std::cout << '\n';
    return 0;
}
