#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; (i) < (int)(n); ++ (i))
#define REP3(i, m, n) for (int i = (m); (i) < (int)(n); ++ (i))
#define REP_R(i, n) for (int i = (int)(n) - 1; (i) >= 0; -- (i))
#define REP3R(i, m, n) for (int i = (int)(n) - 1; (i) >= (int)(m); -- (i))
#define ALL(x) ::std::begin(x), ::std::end(x)
using namespace std;


std::pair<int64_t, int64_t> solve(std::string S, std::string T, int64_t A, int64_t B, std::string U) {
    // TODO: edit here
}

// generated by oj-template v4.8.1 (https://github.com/online-judge-tools/template-generator)
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::string S, T;
    int64_t A, B;
    std::string U;
    std::cin >> S >> T >> A >> B >> U;
    auto [c, d] = solve(S, T, A, B, U);
    std::cout << c << ' ' << d << '\n';
    return 0;
}
