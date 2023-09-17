#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; (i) < (int)(n); ++(i))
#define REP3(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define REP_R(i, n) for (int i = (int)(n)-1; (i) >= 0; --(i))
#define REP3R(i, m, n) for (int i = (int)(n)-1; (i) >= (int)(m); --(i))
#define ALL(x) ::std::begin(x), ::std::end(x)
using namespace std;

int64_t solve(int64_t N, int M, const std::vector<int64_t> &s, const std::vector<char> &c)
{
    auto is_correct = [&](auto n)
    {
        auto s_n = to_string(n);
        REP(i, M)
        {
            if (s_n[s[i] - 1] != c[i])
            {
                return false;
            }
        }
        return true;
    };

    REP(i, 1000)
    {
        if (to_string(i).size() == N and is_correct(i))
        {
            return i;
        }
    }
    return -1;
}

// generated by oj-template v4.8.1 (https://github.com/online-judge-tools/template-generator)
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int64_t N;
    int M;
    std::cin >> N >> M;
    std::vector<int64_t> s(M);
    vector<char> c(M);
    REP(i, M)
    {
        std::cin >> s[i] >> c[i];
    }
    auto ans = solve(N, M, s, c);
    std::cout << ans << '\n';
    return 0;
}