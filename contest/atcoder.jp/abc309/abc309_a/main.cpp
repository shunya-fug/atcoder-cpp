#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; (i) < (int)(n); ++(i))
#define REP3(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define REP_R(i, n) for (int i = (int)(n)-1; (i) >= 0; --(i))
#define REP3R(i, m, n) for (int i = (int)(n)-1; (i) >= (int)(m); --(i))
#define ALL(x) ::std::begin(x), ::std::end(x)
using namespace std;

const std::string YES = "Yes";
const std::string NO = "No";
bool solve(int64_t A, int64_t B)
{
    switch (A)
    {
    case 1:
        return B == 2;
    case 2:
        return B == 1 or B == 3;
    case 3:
        return B == 2;
    case 4:
        return B == 5;
    case 5:
        return B == 4 or B == 6;
    case 6:
        return B == 5;
    case 7:
        return B == 8;
    case 8:
        return B == 7 or B == 9;
    }
}

// generated by oj-template v4.8.1 (https://github.com/online-judge-tools/template-generator)
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int64_t A, B;
    std::cin >> A >> B;
    auto ans = solve(A, B);
    std::cout << (ans ? YES : NO) << '\n';
    return 0;
}