#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; (i) < (int)(n); ++(i))
#define REP3(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define REP_R(i, n) for (int i = (int)(n)-1; (i) >= 0; --(i))
#define REP3R(i, m, n) for (int i = (int)(n)-1; (i) >= (int)(m); --(i))
#define ALL(x) ::std::begin(x), ::std::end(x)
using namespace std;

int64_t solve(int64_t N, std::string S)
{
    deque<int> os, xs;
    REP(i, S.size())
    {
        switch (S[i])
        {
        case 'o':
            os.push_back(i);
            break;
        case 'x':
            xs.push_back(i);
        }
    }

    int64_t ans = 0;
    REP(l, S.size())
    {
        if (os.empty() or xs.empty())
        {
            break;
        }

        switch (S[l])
        {
        case 'o':
            os.pop_front();
            ans += N - xs.front();
            break;
        case 'x':
            xs.pop_front();
            ans += N - os.front();
            break;
        }
    }
    return ans;
}

// generated by oj-template v4.8.1 (https://github.com/online-judge-tools/template-generator)
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int64_t N;
    std::string S;
    std::cin >> N >> S;
    auto ans = solve(N, S);
    std::cout << ans << '\n';
    return 0;
}
