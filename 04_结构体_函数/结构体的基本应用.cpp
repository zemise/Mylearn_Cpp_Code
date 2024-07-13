//
// Created by Zemise on 2024/7/13.
//

#include "iostream"

using namespace std;

int main() {
    struct Student {
        string name;
        int age;
        string gender;
    };

    // 结构体变量的声明，可以在前面带上struct关键字（可以省略不写）
    struct Student stu = {"Zemise", 18, "男"};
    stu.name = "Abc";

    cout << stu.name << endl;

    Student stu2;
    stu2.name = "zemise";
    cout << stu2.name << endl;
    cout << stu2.age << endl;

    return 0;
}
