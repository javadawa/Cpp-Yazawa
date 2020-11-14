#include <iostream>
using namespace std;

int main() {
    int money;
    int price;

    money = 10000;
    while (money > 0)
    {
        cout << "残金は" << money << "円です。" << endl;
        cout << "購入金額を入力して下さい：" << endl;
        cin >> price;
        money -= price;
    }

    cout << "買い物終了です！" << endl;

    return 0;
}
