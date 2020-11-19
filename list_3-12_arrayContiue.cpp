#include <iostream>
using namespace std;

// 60点以上のみ評価を与える

int main()
{
    const int DATA_NUM = 5;
    int point[] = {65, 50, 80, 90, 70};
    int i;
    char grade;

    for (i = 0; i < DATA_NUM; i++)
    {
        if (point[i] < 60) continue;
        if (point[i] >= 80) grade = 'A';
        else if (point[i] >= 70) grade = 'B';
        else grade = 'C';

        cout << point[i] << " = " << grade << endl;
    }

    return 0;
}
