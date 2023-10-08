#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; (i) < (int)(n); ++(i))
#define REP3(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define REP_R(i, n) for (int i = (int)(n)-1; (i) >= 0; --(i))
#define REP3R(i, m, n) for (int i = (int)(n)-1; (i) >= (int)(m); --(i))
#define ALL(x) ::std::begin(x), ::std::end(x)
using namespace std;
#include <boost/algorithm/string/join.hpp>

std::vector<string> solve(int N, const std::vector<int64_t> &A)
{
    vector<int64_t> cnt(N + 1), ids;
    for (auto a : A)
    {
        cnt[a]++;
        if (cnt[a] == 2)
        {
            ids.push_back(a);
        }
    }

    vector<string> ans;
    for (auto i : ids)
    {
        ans.push_back(to_string(i));
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
    std::vector<int64_t> A(3 * N);
    REP(i, 3 * N)
    {
        std::cin >> A[i];
    }
    auto ans = solve(N, A);
    std::cout << boost::join(ans, " ") << '\n';
    return 0;
}