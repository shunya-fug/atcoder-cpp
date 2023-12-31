#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; (i) < (int)(n); ++(i))
#define REP3(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define REP_R(i, n) for (int i = (int)(n)-1; (i) >= 0; --(i))
#define REP3R(i, m, n) for (int i = (int)(n)-1; (i) >= (int)(m); --(i))
#define ALL(x) ::std::begin(x), ::std::end(x)
using namespace std;

const int MOD = 1000000007;

uint64_t f(uint64_t x)
{
    uint64_t v1 = (x % 2 == 0 ? x / 2 : x) % MOD;
    uint64_t v2 = ((x + 1) % 2 == 0 ? (x + 1) / 2 : x + 1) % MOD;
    return v1 * v2 % MOD;
}

uint64_t solve(uint64_t L, uint64_t R)
{
    vector<uint64_t> power(20);
    power[0] = 1;
    REP3(i, 1, power.size())
    {
        power[i] = power[i - 1] * 10;
    }

    uint64_t ans = 0;
    for (uint64_t i = 1; i <= 19; i++)
    {
        uint64_t l = max(L, power[i - 1]), r = min(R, power[i] - 1);
        if (l > r)
        {
            continue;
        }

        ans += i * (f(r) - f(l - 1) + MOD) % MOD;
        ans %= MOD;
    }
    return ans;
}

// generated by oj-template v4.8.1 (https://github.com/online-judge-tools/template-generator)
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    uint64_t L, R;
    std::cin >> L >> R;
    auto ans = solve(L, R);
    std::cout << ans << '\n';
    return 0;
}
