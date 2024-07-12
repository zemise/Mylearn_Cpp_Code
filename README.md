# 从零学起的C++自学笔记

## day02
1. 有符号和无符号数字

- 有符号：signed(可选)
```c++
signed int num1 = 10;
int num2 = 10;
```
- 无符号：unsigned(必写)
```c++
unsigned int num3 = 10;
// 或者快捷写法
u_int num4 = 10;
```

2. 实型数据的展示相关

实型数据没有signed和unsigned，默认全部都有符号。
```c++
cout << fixed; // 设置为小数显示
cout.width(20); // 设置显示的最大宽度（最大位数）
```

3. 整型字面量与常量类型的确定
```c++
10L; // 指定为long类型
123UL; // 指定为unsigned long类型
```

4. 在C++中使用字符串的多种方式
- 字符数组模式，不可更改变量值
```c++
char s[] = "abc";
```
- 指针模式
```c++
char *s = "abc";
```
- string类型模式
```c++
string s = "abc";
```


---
## day01
1. CLion基于工程管理代码，一个工程内默认只允许一个程序入口，即一个main函数

2. 代码 ➡️ 编译 ➡️ 程序
 
所谓的编译，可以理解为翻译为计算机可以执行的程序。

- 手动编译
  - 下载mingw-w64：
  ```zsh
  # for macOS
  brew install mingw-w64
  
  # 编译
  g++ hello_world.cpp -o hello_world
  
  # run
  ./hello_world
  ```
- 编译器编译
  - 主要使用CLion

3. cout相关
- cout功能等同于System.out.print或者说print
- cout可以自由组合 << 从而打印单份或者多份内容到控制台

4. 注释方面，基本和java相同
5. 编译器的习惯设置
- 设置里可以设置鼠标滚轮改变字体大小
- 实用的快捷键
  - SHIFT + ALT + 键盘上/下，控制当前行上下移动

6. 常量

在程序运行过程中，值**不可发生改变**的量
- 字面常量：被书写到代码内的常量称为字面常量，也称字面量
- 符号常量：标识符定义的常量
```c++
# define 标识符(名称) 常量
```
符号常量的定义，不需要分号结尾。

7. 控制台中文乱码问题
- 方式一：引入windows.h库
```c++
#include "windows.h"

SetConsoleOutputCP(CP_UTF8)
```
- 方式二：
```c++
system("chcp" 65001)
```


   