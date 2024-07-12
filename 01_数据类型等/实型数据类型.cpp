//
// Created by Demise on 2024/7/12.
//
#include "iostream"

using namespace std;

int main() {
    float num1 = 123456789;
    cout << num1 << endl;

    cout << fixed; // 设置为小数显示
    cout.width(20); // 设置显示的最大宽度（最大位数）

    cout << num1 << endl;
    return 0;
}