#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; (i) < (int)(n); ++(i))
#define REP3(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define REP_R(i, n) for (int i = (int)(n)-1; (i) >= 0; --(i))
#define REP3R(i, m, n) for (int i = (int)(n)-1; (i) >= (int)(m); --(i))
#define ALL(x) ::std::begin(x), ::std::end(x)
using namespace std;
#include <boost/format.hpp>

// 以下に、24時間表記の時計構造体 Clock を定義する

// Clock構造体のメンバ変数を書く
//   int hour    時間を表す (0~23の値をとる)
//   int minute  分を表す   (0~59の値をとる)
//   int second  秒を表す   (0~59の値をとる)
struct Clock
{
    int hour;
    int minute;
    int second;

    // メンバ関数 set の定義を書く
    //   関数名: set
    //   引数: int h, int m, int s (それぞれ時、分、秒を表す)
    //   返り値: なし
    //   関数の説明:
    //     時・分・秒を表す3つの引数を受け取り、
    //     それぞれ、メンバ変数 hour, minute, second に代入する
    void set(int h, int m, int s)
    {
        hour = h;
        minute = m;
        second = s;
    }

    // メンバ関数 to_str の定義を書く
    //   関数名: to_str
    //   引数: なし
    //   返り値: string型
    //   関数の仕様:
    //     メンバ変数が表す時刻の文字列を返す
    //     時刻の文字列は次のフォーマット
    //     "HH:MM:SS"
    //     HH、MM、SSはそれぞれ時間、分、秒を2桁で表した文字列
    string to_str()
    {
        return (boost::format("%02d:%02d:%02d") % hour % minute % second).str();
    }

    // メンバ関数 shift の定義を書く
    //   関数名: shift
    //   引数: int diff_second
    //   返り値: なし
    //   関数の仕様:
    //     diff_second 秒だけメンバ変数が表す時刻を変更する(ただし、日付やうるう秒は考えない)
    //     diff_second の値が負の場合、時刻を戻す
    //     diff_second の値が正の場合、時刻を進める
    //     diff_second の値は -86400 ~ 86400 の範囲を取りうる
    void shift(int diff_second)
    {
        const auto day_second = 24 * 60 * 60;
        const auto current_second = hour * 60 * 60 + minute * 60 + second;
        const auto shifted_second = (current_second + diff_second + day_second) % day_second;
        hour = (shifted_second / (60 * 60)) % 24;
        minute = (shifted_second / 60) % 60;
        second = shifted_second % 60;
    }
};

std::pair<std::string, std::string> solve(int64_t a, int64_t b, int64_t c, int64_t d)
{
    auto hour = a, minute = b, second = c, diff_second = d;

    // Clock構造体のオブジェクトを宣言
    Clock clock;

    // set関数を呼び出して時刻を設定する
    clock.set(hour, minute, second);

    auto current_time = clock.to_str();

    // 時計を進める(戻す)
    clock.shift(diff_second);

    return {current_time, clock.to_str()};
}

// generated by oj-template v4.8.1 (https://github.com/online-judge-tools/template-generator)
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int64_t a, b, c, d;
    std::cin >> a >> b >> c >> d;
    auto [g, h] = solve(a, b, c, d);
    std::cout << g << '\n';
    std::cout << h << '\n';
    return 0;
}
