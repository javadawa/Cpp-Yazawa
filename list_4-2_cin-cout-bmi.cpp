#include <iostream>
using namespace std;

int main()
{
    double height;
    double weight;
    double bmi;

    // 入力
    cout << "体重(kg)を入力して下さい：";
    cin >> weight;
    cout << "身長(m)を入力して下さい：";
    cin >> height;
    // 演算
    bmi = weight / height / height;
    // 出力
    cout << bmi << endl;

    return 0;
}

/** 実行結果
 * % ./list_4-2_cin-cout-bmi
 * 体重(kg)を入力して下さい：64.0
 * 身長(m)を入力して下さい：1.7
 * 22.1453%
 */
