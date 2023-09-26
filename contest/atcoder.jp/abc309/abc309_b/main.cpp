#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; (i) < (int)(n); ++(i))
#define REP3(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define REP_R(i, n) for (int i = (int)(n)-1; (i) >= 0; --(i))
#define REP3R(i, m, n) for (int i = (int)(n)-1; (i) >= (int)(m); --(i))
#define ALL(x) ::std::begin(x), ::std::end(x)
using namespace std;
#include <boost/lexical_cast.hpp>

std::vector<std::vector<int64_t>> solve(int N, const std::vector<std::vector<int64_t>> &A)
{
    std::vector<std::vector<int64_t>> rotated = A;
    REP(j, N - 1)
    {
        rotated.front()[j + 1] = A.front()[j];
    }
    REP(i, N - 1)
    {
        rotated[i + 1].back() = A[i].back();
    }
    REP_R(j, N - 1)
    {
        rotated.back()[j] = A.back()[j + 1];
    }
    REP_R(i, N - 1)
    {
        rotated[i].front() = A[i + 1].front();
    }
    return rotated;
}

// generated by oj-template v4.8.1 (https://github.com/online-judge-tools/template-generator)
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int N;
    std::cin >> N;
    std::vector<std::vector<int64_t>> A(N, std::vector<int64_t>(N));
    REP(i, N)
    {
        string s;
        cin >> s;
        REP(j, N)
        {
            A[i][j] = boost::lexical_cast<int64_t>(s[j]);
        }
    }
    auto ans = solve(N, A);
    REP(i, N)
    {
        REP(j, N)
        {
            std::cout << ans[i][j];
        }
        std::cout << '\n';
    }
    return 0;
}
