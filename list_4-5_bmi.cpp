#include <iostream>
using namespace std;
#include "chapter4.h"

int main() {
    double height;
    double weight;
    double bmi;

    cout << "身長(cm)を入力して下さい：";
    cin >> height;
    cout << "体重(kg)を入力して下さい：";
    cin >> weight;

    bmi = getBmi(height, weight);
    cout << "あなたのBMIは、" << bmi << "です。" << endl;

    return 0;
}
