#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; (i) < (int)(n); ++(i))
#define REP3(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define REP_R(i, n) for (int i = (int)(n)-1; (i) >= 0; --(i))
#define REP3R(i, m, n) for (int i = (int)(n)-1; (i) >= (int)(m); --(i))
#define ALL(x) ::std::begin(x), ::std::end(x)
using namespace std;

int64_t solve(int n, const std::vector<vector<int64_t>> &a)
{
    int64_t ans = 0;
    REP(i, n)
    {
        ans = max(ans, accumulate(a[0].begin(), a[0].begin() + i + 1, (int64_t)0) + accumulate(a[1].begin() + i, a[1].end(), (int64_t)0));
    }
    return ans;
}

// generated by oj-template v4.8.1 (https://github.com/online-judge-tools/template-generator)
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int n;
    std::cin >> n;
    std::vector<vector<int64_t>> a(2, vector<int64_t>(n));
    REP(i, 2)
    {
        REP(j, n)
        {
            std::cin >> a[i][j];
        }
    }
    auto ans = solve(n, a);
    std::cout << ans << '\n';
    return 0;
}