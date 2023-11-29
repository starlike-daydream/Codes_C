#include<bits/stdc++.h>
using namespace std;

int main(){
    double a,b;//a为确诊数 b为死亡数
    cin>>a>>b;
    cout<<fixed<<setprecision(3)<<b / a * 100<<"%";//甲流死亡率；求百分制，乘以100，再加上百分号即可
    return 0;//好习惯
}