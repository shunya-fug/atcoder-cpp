#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; (i) < (int)(n); ++(i))
#define REP3(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define REP_R(i, n) for (int i = (int)(n)-1; (i) >= 0; --(i))
#define REP3R(i, m, n) for (int i = (int)(n)-1; (i) >= (int)(m); --(i))
#define ALL(x) ::std::begin(x), ::std::end(x)
using namespace std;

int64_t solve(int64_t A, int64_t B, int64_t C, int64_t X, int64_t Y)
{
    int64_t ans = 0;
    if (A + B > C * 2)
    {
        ans += C * 2 * min(X, Y);
        ans += X > Y ? (X - Y) * min(A, C * 2) : (Y - X) * min(B, C * 2);
    }
    else
    {
        ans += A * X + B * Y;
    }
    return ans;
}

// generated by oj-template v4.8.1 (https://github.com/online-judge-tools/template-generator)
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int64_t A, B, C, X, Y;
    std::cin >> A >> B >> C >> X >> Y;
    auto ans = solve(A, B, C, X, Y);
    std::cout << ans << '\n';
    return 0;
}
