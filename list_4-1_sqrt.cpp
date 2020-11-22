#include <iostream>
using namespace std;

int main() {
    double data;
    double ans;

    cout << "平方根を求める数値を入力して下さい：" ;
    cin >> data;

    ans = sqrt(data);

    cout << ans << endl;

    return 0;
}

// Cpp-Yazawa % ./a.out
// 平方根を求める数値を入力して下さい：2
// 1.41421
