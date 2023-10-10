#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; (i) < (int)(n); ++(i))
#define REP3(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define REP_R(i, n) for (int i = (int)(n)-1; (i) >= 0; --(i))
#define REP3R(i, m, n) for (int i = (int)(n)-1; (i) >= (int)(m); --(i))
#define ALL(x) ::std::begin(x), ::std::end(x)
using namespace std;
#include <boost/unordered_map.hpp>

std::pair<int64_t, int64_t> solve(int64_t W, int64_t H, int N, const std::vector<int64_t> &p, const std::vector<int64_t> &q, int A, const std::vector<int64_t> &a, int B, const std::vector<int64_t> &b)
{
    boost::unordered_map<pair<int64_t, int64_t>, int64_t> berry;
    REP(i, N)
    {
        auto x = ranges::lower_bound(a, p[i]) - begin(a),
             y = ranges::lower_bound(b, q[i]) - begin(b);
        berry[{x, y}]++;
    }

    int64_t m = (int)berry.size() == (A + 1) * (B + 1) ? 1e18 : 0,
            M = 0;
    for (auto cnt : berry | views::values)
    {
        m = min(m, cnt);
        M = max(M, cnt);
    }
    return {m, M};
}

// generated by oj-template v4.8.1 (https://github.com/online-judge-tools/template-generator)
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int64_t W, H;
    int N, A, B;
    std::cin >> W >> H >> N;
    std::vector<int64_t> p(N), q(N);
    REP(i, N)
    {
        std::cin >> p[i] >> q[i];
    }
    std::cin >> A;
    std::vector<int64_t> a(A);
    REP(i, A)
    {
        std::cin >> a[i];
    }
    std::cin >> B;
    std::vector<int64_t> b(B);
    REP(i, B)
    {
        std::cin >> b[i];
    }
    auto [m, M] = solve(W, H, N, p, q, A, a, B, b);
    std::cout << m << ' ' << M << '\n';
    return 0;
}
