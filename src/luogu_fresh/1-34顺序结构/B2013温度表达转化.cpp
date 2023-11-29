#include<bits/stdc++.h>
using namespace std;

int main(){
    double F;//F表示华氏温度
    cin>>F;
    cout<<fixed<<setprecision(5)<<5 * (F - 32) / 9;//带入题目所给表达式计算出摄氏度即可
    return 0;//好习惯
}