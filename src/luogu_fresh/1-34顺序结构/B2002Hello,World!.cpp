#include<iostream>//包含c++输入输出函数的头文件（记法：输入输出(input&output)流）
using namespace std;//开辟一块命名空间，这样才能使用cin与cout（c++的输入输出语句）
//c++的单行注释为//（双斜杠），多行注释为：/*注释内容……*/，和Java一样

int main(){//主函数，要执行的语句须写在这对大括号里
    cout << "Hello,World!";//c++输出语句c out(出去)，<<（两个小于号，也叫插入运算符）用来分开多个要输出的数据（各种数据类型都可以输出哦），C++的字符串同样是用""双引号包裹
    return 0;//返回状态码0以表示程序正常结束
}

//不要少分号，不要拼错namespace（我直接敲常犯的错误……）