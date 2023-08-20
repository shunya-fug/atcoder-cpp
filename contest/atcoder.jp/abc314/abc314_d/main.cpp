#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; (i) < (int)(n); ++(i))
#define REP3(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define REP_R(i, n) for (int i = (int)(n)-1; (i) >= 0; --(i))
#define REP3R(i, m, n) for (int i = (int)(n)-1; (i) >= (int)(m); --(i))
#define ALL(x) ::std::begin(x), ::std::end(x)
using namespace std;

std::string solve(int64_t N, std::string S, int Q, const std::vector<int64_t> &t, const std::vector<int64_t> &x, const std::vector<char> &c)
{
    REP(i, t.size())
    {
        if (t[i] == 1)
        {
            S[x[i] - 1] = c[i];
        }
        else if (t[i] == 2)
        {
            transform(S.begin(), S.end(), S.begin(), ::tolower);
        }
        else
        {
            transform(S.begin(), S.end(), S.begin(), ::toupper);
        }
    }
    return S;
}

// generated by oj-template v4.8.1 (https://github.com/online-judge-tools/template-generator)
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int64_t N;
    std::string S;
    int Q;
    std::cin >> N >> S >> Q;
    std::vector<int64_t> t, x;
    std::vector<char> c;
    int tmp_i = -1;
    std::int64_t tmp_t, tmp_x;
    char tmp_c;
    REP(i, Q)
    {
        int64_t _t, _x;
        char _c;
        std::cin >> _t >> _x >> _c;
        if (_t == 1)
        {
            t.push_back(_t);
            x.push_back(_x);
            c.push_back(_c);
        }
        else
        {
            tmp_i = t.size();
            tmp_t = _t;
            tmp_x = _x;
            tmp_c = _c;
        }
    }
    if (tmp_i != -1)
    {
        t.insert(t.begin() + tmp_i, tmp_t);
        x.insert(x.begin() + tmp_i, tmp_x);
        c.insert(c.begin() + tmp_i, tmp_c);
    }
    auto ans = solve(N, S, Q, t, x, c);
    std::cout << ans << '\n';
    return 0;
}