#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    double height;
    double weight;
    double bmi;
    string judgement;

    // 入力
    cout << "体重(kg)を入力して下さい：";
    cin >> weight;
    cout << "身長(cm)を入力して下さい：";
    cin >> height;
    // 演算
    height /= 100;
    bmi = weight / height / height;
    // 出力
    cout << "あなたのBMIは" << fixed << setprecision(1) << bmi << "です。" << endl;
    cout << "18.5 ~ 25.0が標準です。" << endl;

    // 三項演算子
    judgement = bmi >= 25.0 ? "肥満です。" : "肥満ではありません。";
    cout << judgement << endl;

    return 0;
}

/**
 * << fixed << setprecision() << で小数点以下の桁数を設定し固定
 * fixed と setprecision を使うにはヘッダファイル iomanip が必要
 * BMIの計算は、単位が kg / m / m
 *
 * 実行結果
 * % ./bmi
 * 体重(kg)を入力して下さい：64
 * 身長(cm)を入力して下さい：170
 * あなたのBMIは22.1です。
 * 18.5 ~ 25.0が標準です。
 */
