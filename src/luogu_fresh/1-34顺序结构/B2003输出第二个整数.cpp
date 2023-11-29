#include<iostream>
#define ll long long //C语言中的宏定义，将会对所有语句中的ll做简单字符串替换为long long
//简单说一下C语言的长整型long long范围为[−2^63,2^63−1](这里^代表次幂，当int的约21亿装不下就用它)，相当于Java中的long，大家写题目要注意数据范围哦
using namespace std;

int main(){
    ll a,b,c;//声明变量a，b，c，代表输入的三个数
    cin>>a>>b>>c;//c++的输入语句c in(进来)，只要声明了变量，就可以在这里用>>(两个大于号)分隔以获取控制台的一个或多个输入数据为对应变量赋值，每个数据的结束标志是空格/换行（同样是可以接收多种数据类型，不过需要与变量对应好）
    cout<<b;//输出输入的第二个数
    return 0;//好习惯
}