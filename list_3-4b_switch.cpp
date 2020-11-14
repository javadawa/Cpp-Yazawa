#include <iostream>
#include <string>
using namespace std;

int main()
{
    int channel;
    string fee;

    // キー入力をchannelに格納する
    cout << "テレビのチャンネル番号を入力して下さい：";
    cin >> channel;

    // テレビ局の番号をfeeに格納する
    switch (channel)
    {
    case 1:
    case 3:
        fee = "有料です。";
        break;
    case 4:
    case 6:
    case 8:
    case 10:
    case 12:
        fee = "無料です。";
        break;
    default:
        fee = "チャンネルの割り当てがありません。";
        break;
    }

    cout << fee << endl;

    return 0;
}
