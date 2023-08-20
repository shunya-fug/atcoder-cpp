#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; (i) < (int)(n); ++(i))
#define REP3(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define REP_R(i, n) for (int i = (int)(n)-1; (i) >= 0; --(i))
#define REP3R(i, m, n) for (int i = (int)(n)-1; (i) >= (int)(m); --(i))
#define ALL(x) ::std::begin(x), ::std::end(x)
using namespace std;

int64_t solve(int N, const std::vector<int64_t> &s)
{
    int64_t sum = accumulate(ALL(s), 0LL), ans = sum % 10 == 0 ? 0 : sum;
    for (auto s : s)
    {
        int64_t display_value = (sum - s) % 10 == 0 ? 0 : sum - s;
        ans = max(ans, display_value);
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
    std::vector<int64_t> s(N);
    REP(i, N)
    {
        std::cin >> s[i];
    }
    auto ans = solve(N, s);
    std::cout << ans << '\n';
    return 0;
}