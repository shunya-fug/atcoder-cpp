#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; (i) < (int)(n); ++(i))
#define REP3(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define REP_R(i, n) for (int i = (int)(n)-1; (i) >= 0; --(i))
#define REP3R(i, m, n) for (int i = (int)(n)-1; (i) >= (int)(m); --(i))
#define ALL(x) ::std::begin(x), ::std::end(x)
using namespace std;

double solve(int N, const std::vector<int64_t> &L, const std::vector<int64_t> &R)
{
    double ans = 0.0;
    REP(i, N)
    REP3(j, i + 1, N)
    {
        auto cnt = 0,
             all = 0;
        REP3(x, L[i], R[i] + 1)
        REP3(y, L[j], R[j] + 1)
        {
            if (x > y)
            {
                cnt++;
            }
            all++;
        }
        ans += double(cnt) / all;
    }
    return ans;
}

// generated by oj-template v4.8.1 (https://github.com/online-judge-tools/template-generator)
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int N;
    std::cin >> N;
    std::vector<int64_t> L(N), R(N);
    REP(i, N)
    {
        std::cin >> L[i] >> R[i];
    }
    auto ans = solve(N, L, R);
    std::cout << fixed << setprecision(10) << ans << '\n';
    return 0;
}
