#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; (i) < (int)(n); ++(i))
#define REP3(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define REP_R(i, n) for (int i = (int)(n)-1; (i) >= 0; --(i))
#define REP3R(i, m, n) for (int i = (int)(n)-1; (i) >= (int)(m); --(i))
#define ALL(x) ::std::begin(x), ::std::end(x)
using namespace std;

int64_t solve(int64_t N, int64_t M)
{
    if (N > M)
    {
        swap(N, M);
    }

    int64_t ans = 0;
    if (N == 1)
    {
        ans = M == 1 ? 1 : M - 2;
    }
    else
    {
        ans = (N - 2) * (M - 2);
    }
    return ans;
}

// generated by oj-template v4.8.1 (https://github.com/online-judge-tools/template-generator)
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int64_t N, M;
    std::cin >> N >> M;
    auto ans = solve(N, M);
    std::cout << ans << '\n';
    return 0;
}
