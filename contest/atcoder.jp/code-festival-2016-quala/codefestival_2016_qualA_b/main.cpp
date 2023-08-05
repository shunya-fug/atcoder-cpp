#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; (i) < (int)(n); ++(i))
#define REP3(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define REP_R(i, n) for (int i = (int)(n)-1; (i) >= 0; --(i))
#define REP3R(i, m, n) for (int i = (int)(n)-1; (i) >= (int)(m); --(i))
#define ALL(x) ::std::begin(x), ::std::end(x)
using namespace std;

int64_t solve(int N, const std::vector<int64_t> &a)
{
    vector<int64_t> rabbits(N);
    REP(i, N)
    {
        rabbits[i] = a[i] - 1;
    }

    int64_t ans = 0;
    REP(i, N)
    {
        auto target = rabbits[i];
        if (target > i && rabbits[target] == i)
        {
            ans++;
        }
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
    std::vector<int64_t> a(N);
    REP(i, N)
    {
        std::cin >> a[i];
    }
    auto ans = solve(N, a);
    std::cout << ans << '\n';
    return 0;
}
