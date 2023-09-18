#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; (i) < (int)(n); ++(i))
#define REP3(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define REP_R(i, n) for (int i = (int)(n)-1; (i) >= 0; --(i))
#define REP3R(i, m, n) for (int i = (int)(n)-1; (i) >= (int)(m); --(i))
#define ALL(x) ::std::begin(x), ::std::end(x)
using namespace std;

vector<int64_t> solve(int N, const std::vector<int64_t> &lx, const std::vector<int64_t> &ly, const std::vector<int64_t> &rx, const std::vector<int64_t> &ry)
{
    vector<vector<int64_t>> paper(1001, vector<int64_t>(1001, 0));
    REP(i, N)
    {
        paper[ly[i]][lx[i]]++;
        paper[ry[i]][lx[i]]--;
        paper[ly[i]][rx[i]]--;
        paper[ry[i]][rx[i]]++;
    }

    REP(i, paper.size())
    {
        REP(j, paper[0].size() - 1)
        {
            paper[i][j + 1] += paper[i][j];
        }
    }
    REP(j, paper.size())
    {
        REP(i, paper[0].size() - 1)
        {
            paper[i + 1][j] += paper[i][j];
        }
    }
    vector<int64_t> ans(N, 0);
    REP(i, paper.size())
    {
        REP(j, paper[0].size())
        {
            if (paper[i][j] != 0)
            {
                ans[paper[i][j] - 1]++;
            }
        }
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
    std::vector<int64_t> lx(N), ly(N), rx(N), ry(N);
    REP(i, N)
    {
        std::cin >> lx[i] >> ly[i] >> rx[i] >> ry[i];
    }
    auto ans = solve(N, lx, ly, rx, ry);
    REP(i, N)
    {
        std::cout << ans[i] << '\n';
    }
    return 0;
}
