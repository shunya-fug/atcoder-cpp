#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; (i) < (int)(n); ++(i))
#define REP3(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define REP_R(i, n) for (int i = (int)(n)-1; (i) >= 0; --(i))
#define REP3R(i, m, n) for (int i = (int)(n)-1; (i) >= (int)(m); --(i))
#define ALL(x) ::std::begin(x), ::std::end(x)
using namespace std;
#include <boost/algorithm/string/join.hpp>

std::vector<string> solve(int N, const std::vector<int64_t> &A, const std::vector<int64_t> &B)
{
    vector<int64_t> pi(N);
    iota(ALL(pi), 0LL);
    auto compare = [&](auto i, auto j)
    {
        return A[i] * (A[j] + B[j]) > A[j] * (A[i] + B[i]);
    };
    ranges::stable_sort(pi, compare);

    vector<string> ans(N);
    REP(i, N)
    {
        ans[i] = to_string(pi[i] + 1);
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
    std::vector<int64_t> A(N), B(N);
    REP(i, N)
    {
        std::cin >> A[i] >> B[i];
    }
    auto ans = solve(N, A, B);
    std::cout << boost::join(ans, " ") << endl;
    return 0;
}
