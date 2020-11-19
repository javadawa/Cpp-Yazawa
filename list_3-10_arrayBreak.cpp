#include <iostream>
using namespace std;


// 1. 平均を求める
// 2. 特定の値を見つける

int main() {
    const int DATA_NUM = 5;
    int point[DATA_NUM] = {85, 60, 98, 73, 80};

    int sum;
    double average;
    int i;

    int position = -1;
    int specificValue;

    for (i = 0; i < DATA_NUM; i++) {
        sum += point[i];
    }

    average = (double)sum / DATA_NUM;
    cout << average << endl;

    cout << "検索対象の数字を入力して下さい：" ;
    cin >> specificValue;

    for (i = 0; i < DATA_NUM; i++) {
        if (point[i] == specificValue)
        {
            position = i;
            break;
        }

    }

    if (position == -1)
    {
        cout << "見つかりませんでした。" << endl;
    } else {
        cout << "インデックスは" << position << "番です。" << endl;
    }


    return 0;
}
