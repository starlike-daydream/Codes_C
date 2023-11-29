#include<iostream>
#include<iomanip>//含setw()函数的头文件
#define ll long long 
using namespace std;

int main(){
    ll a,b,c;
    cin>>a>>b>>c;
    cout<<setw(8)<<a<<" ";//设置长度的意思（set width），这里就是用空格让它补齐为8的长度，默认右对齐
    cout<<setw(8)<<b<<" ";
    cout<<setw(8)<<c<<endl;//endl相当于"\n",是C++中的换行，意为end line结束此行
    return 0;//好习惯
}