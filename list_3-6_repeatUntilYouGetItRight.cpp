#include <iostream>
using namespace std;

int main()
{
    const char RIGHT_ANS = 'c';
    char ans;

    // 正答するまで繰り返す
    do
    {
        cout << "PHPのフレームワークは？" << endl;
        cout << "a : Django, b : Flask, c : Laravel" << endl;
        cout << "選択肢 a, b, c の中から一つを選んで入力して下さい　：" << endl;
        cin >> ans;
    } while (ans != RIGHT_ANS);

    cout << "正解です！" << endl;

    return 0;
}
