#include <iostream>
using namespace std;

int main()
{
  cout << "Hello, World!" << endl;
  return 0;
}

/** #include <iostream>
 *  ヘッダファイル iostream がコンパイル時に挿入される
 *
 *  using namespace std;
 *  この記述によって
 *  std::cout << "Hello, World!" << std::endl; を
 *  cout << "Hello, World!" << endl; と簡略化できる
 *  :: はスコープ解決演算子
 */
