#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; (i) < (int)(n); ++(i))
#define REP3(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define REP_R(i, n) for (int i = (int)(n)-1; (i) >= 0; --(i))
#define REP3R(i, m, n) for (int i = (int)(n)-1; (i) >= (int)(m); --(i))
#define ALL(x) ::std::begin(x), ::std::end(x)
using namespace std;
#include <boost/algorithm/string/join.hpp>
using namespace boost::algorithm;

auto solve(int N, int M, const std::vector<int64_t> &A, const std::vector<int64_t> &B)
{
    vector<vector<string>> result(N, vector<string>(N, "-"));
    REP(i, M)
    {
        result.at(A.at(i) - 1).at(B.at(i) - 1) = "o";
        result.at(B.at(i) - 1).at(A.at(i) - 1) = "x";
    }
    return result;
}

// generated by oj-template v4.8.1 (https://github.com/online-judge-tools/template-generator)
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int N, M;
    std::cin >> N >> M;
    std::vector<int64_t> A(M), B(M);
    REP(i, M)
    {
        std::cin >> A.at(i) >> B.at(i);
    }
    auto ans = solve(N, M, A, B);
    for (auto l : ans)
    {
        std::cout << boost::algorithm::join(l, " ") << endl;
    }
    return 0;
}
