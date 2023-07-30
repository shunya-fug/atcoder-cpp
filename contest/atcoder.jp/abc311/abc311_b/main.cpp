#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; (i) < (int)(n); ++(i))
#define REP3(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define REP_R(i, n) for (int i = (int)(n)-1; (i) >= 0; --(i))
#define REP3R(i, m, n) for (int i = (int)(n)-1; (i) >= (int)(m); --(i))
#define ALL(x) ::std::begin(x), ::std::end(x)
using namespace std;
#include <boost/range/algorithm.hpp>
#include <boost/algorithm/string.hpp>

const int MAX_DIGIT = 100;

bitset<MAX_DIGIT> str2bit(string &s)
{
    boost::replace_all(s, "o", "1");
    boost::replace_all(s, "x", "0");
    bitset<MAX_DIGIT> b(s);
    return b;
}

int64_t solve(int N, int64_t D, std::vector<std::string> &S)
{
    vector<bitset<MAX_DIGIT>> plan;
    transform(ALL(S), back_inserter(plan), str2bit);
    auto all_plan = reduce(ALL(plan), plan[0], [](auto &a, auto &b)
                           { return a & b; })
                        .to_string();
    int64_t ans = 0;
    for (auto it = all_plan.begin(); it < all_plan.end(); it++)
    {
        int64_t count = 0;
        while (*it == '1')
        {
            count++;
            it++;
        }
        ans = max(ans, count);
    }
    return ans;
}

// generated by oj-template v4.8.1 (https://github.com/online-judge-tools/template-generator)
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int N;
    int64_t D;
    std::cin >> N;
    std::vector<std::string> S(N);
    std::cin >> D;
    REP(i, N)
    {
        std::cin >> S[i];
    }
    auto ans = solve(N, D, S);
    std::cout << ans << '\n';
    return 0;
}