//
// Created by Zemise on 2024/7/13.
//

#include "iostream"

using namespace std;

int main() {
    int *p = new int;
    *p = 10;
    cout << "new申请的4字节空间，存放的是：" << *p << endl;
    cout << "它的内存地址是：" << p << endl;
    delete p;

    int num = 10;
    cout << num << endl;

    // 错误示例01
    // 因为delete需要删除具体的指针，不能接具体的变量
    // delete num;

    // 错误示例02
    // 以下语法虽然成立，但属于高危操作，最好不要删除静态内存的东西，这部分是C++自己的管理
    // delete &num;


    int *p_arr = new int[5]; // 申请可以存放5个int类型元素的数组空间

    p_arr[0] = 10; // 等同于 *p_arr = 10;
    p_arr[1] = 20; // 等同于 *(p_arr + 1) = 20;
    p_arr[2] = 30; // 等同于 *(p_arr + 2) = 30;
    *(p_arr + 3) = 40;
    cout << "数组的第一个元素是：" << p_arr[0] << endl;
    cout << "数组的第四个元素是：" << p_arr[3] << endl;

    // 这里尤为注意，删除数组，delete后面需要加上[]
    delete[] p_arr;


    // 练习
//    1.通过new运算符，申请10个int元素的数组内存空间并完成赋值
//    2. 通过for循环，基于指针形式取出数组元素并打印输出
//    3.通过delete运算符，清理申请的内存空间
    int *a_arr = new int[10];
    for (int i = 0; i < 10; ++i) {
        *(a_arr + i) = i * 10;
    }

    for (int i = 0; i < 5; ++i) { // 使用传统的for循环遍历动态数组
        cout << a_arr[i] << endl;
    }

    delete[] a_arr;
    return 0;
}
