#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; (i) < (int)(n); ++(i))
#define REP3(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define REP_R(i, n) for (int i = (int)(n)-1; (i) >= 0; --(i))
#define REP3R(i, m, n) for (int i = (int)(n)-1; (i) >= (int)(m); --(i))
#define ALL(x) ::std::begin(x), ::std::end(x)
using namespace std;

constexpr int64_t MOD = 1000000007;
int64_t solve(int64_t N, int64_t L)
{
    vector<int64_t> count(N + 1);
    count[0] = 1;
    REP(i, N)
    {
        try
        {
            count.at(i + 1) += count.at(i);
            count.at(i + 1) %= MOD;
            count.at(i + L) += count.at(i);
            count.at(i + L) %= MOD;
        }
        catch (exception e)
        {
        }
    }

    return count[N];
}

// generated by oj-template v4.8.1 (https://github.com/online-judge-tools/template-generator)
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int64_t N, L;
    std::cin >> N >> L;
    auto ans = solve(N, L);
    std::cout << ans << '\n';
    return 0;
}
