#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; (i) < (int)(n); ++(i))
#define REP3(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define REP_R(i, n) for (int i = (int)(n)-1; (i) >= 0; --(i))
#define REP3R(i, m, n) for (int i = (int)(n)-1; (i) >= (int)(m); --(i))
#define ALL(x) ::std::begin(x), ::std::end(x)
using namespace std;

int64_t solve(int64_t N, std::string S)
{
    map<char, int> cnt;
    int ans = 1;
    for (auto c : S)
    {
        cnt[c] += 1;
        if (cnt['A'] >= 1 && cnt['B'] >= 1 && cnt['C'] >= 1)
            return ans;
        ans++;
    }
    return 0;
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
