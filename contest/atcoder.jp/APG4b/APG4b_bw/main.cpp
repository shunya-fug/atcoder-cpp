#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; (i) < (int)(n); ++(i))
#define REP3(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define REP_R(i, n) for (int i = (int)(n)-1; (i) >= 0; --(i))
#define REP3R(i, m, n) for (int i = (int)(n)-1; (i) >= (int)(m); --(i))
#define ALL(x) ::std::begin(x), ::std::end(x)
using namespace std;
#include <boost/algorithm/string.hpp>
#include <boost/range/sub_range.hpp>
#include <boost/algorithm/string/replace.hpp>
#include <boost/range/adaptor/transformed.hpp>
#include <boost/lexical_cast.hpp>

class COMMAND
{
public:
    inline static const string INT = "int";
    inline static const string VEC = "vec";
    inline static const string PRINT_INT = "print_int";
    inline static const string PRINT_VEC = "print_vec";
};

auto solve(int n, const std::vector<string> &a)
{
    vector<string> prints;
    map<string, int> var;
    map<string, map<int, int>> vec;

    for (auto command : a)
    {
        vector<string> parts;
        boost::algorithm::split(parts, command, boost::is_space());

        if (parts.front() == COMMAND::INT)
        {
            auto name = parts.at(1);
            auto sign = 1;
            for (auto part : boost::sub_range<vector<string>>(parts.begin() + 3, parts.end() - 1))
            {
                // 符号の場合
                if (part == "+" || part == "-")
                {
                    sign = part == "+" ? 1 : -1;
                    continue;
                }

                // 変数を更新
                var[name] += stoi(part) * sign;
            }
        }
        if (parts.front() == COMMAND::VEC)
        {
            auto name = parts.at(1);
            auto sign = 1, index = 0;
            for (string part : boost::sub_range<vector<string>>(parts.begin() + 3, parts.end() - 1))
            {
                // 符号の場合
                if (part == "+" || part == "-")
                {
                    sign = part == "+" ? 1 : -1;
                    continue;
                }

                try
                {
                    // ベクトル変数の場合
                    auto v = vec.at(part);
                    REP(i, v.size())
                    {
                        vec[name][i] += v.at(i) * sign;
                    }
                }
                catch (const std::out_of_range &e)
                {
                    if (part == "[" || part == "]" || part == ",")
                    {
                        if (part == "]")
                            index = 0;
                        continue;
                    }

                    try
                    {
                        // 変数の場合
                        vec[name][index] += var.at(part) * sign;
                    }
                    catch (const std::out_of_range &e)
                    {
                        // 数値の場合
                        vec[name][index] += stoi(part) * sign;
                    }
                    index++;
                }
            }
        }
        if (parts.front() == COMMAND::PRINT_INT)
        {
            auto ans = 0, sign = 1;
            for (auto part : boost::sub_range<vector<string>>(parts.begin() + 1, parts.end() - 1))
            {
                // 符号の場合
                if (part == "+" || part == "-")
                {
                    sign = part == "+" ? 1 : -1;
                    continue;
                }

                try
                {
                    // 数値の場合
                    ans += stoi(part) * sign;
                }
                catch (const std::invalid_argument &e)
                {
                    // 変数の場合
                    ans += var[part] * sign;
                }
            }
            prints.push_back(to_string(ans));
        }
        if (parts.front() == COMMAND::PRINT_VEC)
        {
            map<int, int> ans;
            auto sign = 1, index = 0;
            for (string part : boost::sub_range<vector<string>>(parts.begin() + 1, parts.end() - 1))
            {
                // 符号の場合
                if (part == "+" || part == "-")
                {
                    sign = part == "+" ? 1 : -1;
                    continue;
                }

                try
                {
                    // 変数の場合
                    auto v = vec.at(part);
                    REP(i, v.size())
                    {
                        ans[i] += v.at(i) * sign;
                    }
                }
                catch (const std::out_of_range &e)
                {
                    // ベクトルの場合
                    if (part == "[" || part == "]" || part == ",")
                    {
                        if (part == "]")
                            index = 0;
                        continue;
                    }
                    ans[index] += stoi(part) * sign;
                    index++;
                }
            }
            auto int_to_string = [](pair<int, int> p)
            { return boost::lexical_cast<std::string>(p.second); };
            auto result = boost::algorithm::join(ans | boost::adaptors::transformed(int_to_string), " ");
            prints.push_back("[ " + result + " ]");
        }
    }

    return prints;
}

// generated by oj-template v4.8.1 (https://github.com/online-judge-tools/template-generator)
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int n;
    std::cin >> n;
    std::cin.ignore();
    std::vector<string> a(n);
    REP(i, n)
    {
        getline(cin, a[i]);
    }
    auto ans = solve(n, a);
    for (auto ans : ans)
    {
        std::cout << ans << '\n';
    }
    return 0;
}
