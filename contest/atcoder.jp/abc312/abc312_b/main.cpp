#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; (i) < (int)(n); ++(i))
#define REP3(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define REP_R(i, n) for (int i = (int)(n)-1; (i) >= 0; --(i))
#define REP3R(i, m, n) for (int i = (int)(n)-1; (i) >= (int)(m); --(i))
#define ALL(x) ::std::begin(x), ::std::end(x)
using namespace std;

const int64_t L = 9;

auto isCorrectFormat(std::vector<std::string> code)
{
    REP(i, L)
    {
        if (i < 3)
        {
            if (code.at(i).substr(0, 4) != "###.")
                return false;
        }
        if (i == 3)
        {
            if (code.at(i).substr(0, 4) != "....")
                return false;
        }
        if (i == L - 4)
        {
            if (code.at(i).substr(L - 4, 4) != "....")
                return false;
        }
        if (L - 4 < i)
        {
            if (code.at(i).substr(L - 4, 4) != ".###")
                return false;
        }
    }
    return true;
}

auto solve(int N, int64_t M, const std::vector<std::string> &S)
{
    vector<pair<int, int>> correctPosision;

    REP(i, N - L + 1)
    {
        REP(j, M - L + 1)
        {
            vector<string> TaK_Code(L);
            REP(k, L)
            {
                TaK_Code.at(k) = S.at(i + k).substr(j, L);
            }
            if (isCorrectFormat(TaK_Code))
            {
                correctPosision.push_back(make_pair(i + 1, j + 1));
            }
        }
    }

    return correctPosision;
}

// generated by oj-template v4.8.1 (https://github.com/online-judge-tools/template-generator)
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int N;
    int64_t M;
    std::cin >> N;
    std::vector<std::string> S(N);
    std::cin >> M;
    REP(i, N)
    {
        std::cin >> S[i];
    }
    auto ans = solve(N, M, S);
    for (auto pos : ans)
    {
        std::cout << pos.first << " " << pos.second << '\n';
    }
    if (ans.empty())
        cout << endl;
    return 0;
}
