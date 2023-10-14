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
    vector<int64_t> total(N);
    REP(i, N)
    {
        REP(j, 7)
        {
            total[i] += A[7 * i + j];
        }
    }

    vector<string> ans;
    for (auto t : total)
    {
        ans.push_back(to_string(t));
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
    std::vector<int64_t> A(7 * N);
    REP(i, 7 * N)
    {
        std::cin >> A[i];
    }
    auto ans = solve(N, A);
    cout << boost::join(ans, " ") << '\n';
    return 0;
}