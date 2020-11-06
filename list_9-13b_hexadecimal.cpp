#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[])
{
    for (int data = 0; data <= 31; data++)
    {
        cout << setw(2) << setfill('0') << hex << uppercase << data << ' ';
    }
    cout << endl;
    return 0;
}

/**実行結果
 * 00 01 02 03 04 05 06 07 08 09 0A 0B 0C 0D 0E 0F 10 11 12 13 14 15 16 17 18 19 1A 1B 1C 1D 1E 1F
 * setw(2) : ２桁であることを表す
 * setfill('0') : 上位桁を０で埋める
 * hex : １６進数にする
 * uppercase : １６進数のアルファベットを大文字にする
 * setw と setfill を使うには、ヘッダファイル iomanip が必要
 */
