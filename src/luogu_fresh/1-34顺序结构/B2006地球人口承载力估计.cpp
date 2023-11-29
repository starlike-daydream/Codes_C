#include<bits/stdc++.h>//大家可以用这个万能头文件，他会包含大多数我们会用到的函数（记法：位/标准（standard）c++，注意这里有.h的后缀）
using namespace std;

int main(){
    double a,b,x,y,e;//声明五个双精度浮点数变量（也就是常用的装小数的变量啦，有效数字为15~16位，单精度浮点数float有效数字为6~7位）
    cin>>x>>a>>y>>b;
    e = (a * x - b * y) / (a - b);//我一开始也没看明白题意，嗯……套用了题解的公式，括号提升优先级，加减乘除不用多说了吧……
    cout<<fixed<<setprecision(2)<<e;//控制输出小数位数n，需要fixed<<setprecision(n)<<,意为固定，设置精确度；一次只能控制一个变量，所以不是很方便，会printf可以替换，我为了熟悉c++，会在入门题一直使用此语句
    return 0;//好习惯
}