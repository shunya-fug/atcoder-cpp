#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; (i) < (int)(n); ++(i))
#define REP3(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define REP_R(i, n) for (int i = (int)(n)-1; (i) >= 0; --(i))
#define REP3R(i, m, n) for (int i = (int)(n)-1; (i) >= (int)(m); --(i))
#define ALL(x) ::std::begin(x), ::std::end(x)
using namespace std;

int64_t solve(int N, int K, const std::vector<int64_t> &a, const std::vector<int64_t> &b)
{
    vector<pair<int64_t, int64_t>> days(N);
    REP(i, N)
    {
        days[i] = {a[i], b[i]};
    }

    ranges::sort(days);
    int64_t medicine = 0;
    for (auto day : days)
    {
        medicine += day.second;
    }
    if (medicine <= K)
    {
        return 1;
    }
    REP_R(i, N - 1)
    {
        days[i].second += days[i + 1].second;
    }

    REP(i, N)
    {
        if (days[i].second <= K)
        {
            return days[i].first;
        }
        else if (days[i] == days.back() or days[i + 1].second <= K)
        {
            return days[i].first + 1;
        }
    }
    return days.back().first + 1;
}

// generated by oj-template v4.8.1 (https://github.com/online-judge-tools/template-generator)
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int N, K;
    std::cin >> N >> K;
    std::vector<int64_t> a(N), b(N);
    REP(i, N)
    {
        std::cin >> a[i] >> b[i];
    }
    auto ans = solve(N, K, a, b);
    std::cout << ans << '\n';
    return 0;
}