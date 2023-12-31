#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; (i) < (int)(n); ++(i))
#define REP3(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define REP_R(i, n) for (int i = (int)(n)-1; (i) >= 0; --(i))
#define REP3R(i, m, n) for (int i = (int)(n)-1; (i) >= (int)(m); --(i))
#define ALL(x) ::std::begin(x), ::std::end(x)
using namespace std;

int64_t solve(int N, int64_t H, int64_t X, const std::vector<int64_t> &P)
{
    REP(i, N)
    {
        if (H + P[i] >= X)
        {
            return i + 1;
        }
    }
    return 0;
}

// generated by oj-template v4.8.1 (https://github.com/online-judge-tools/template-generator)
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int N;
    int64_t H, X;
    std::cin >> N;
    std::vector<int64_t> P(N);
    std::cin >> H >> X;
    REP(i, N)
    {
        std::cin >> P[i];
    }
    auto ans = solve(N, H, X, P);
    std::cout << ans << '\n';
    return 0;
}
