#include<bits/stdc++.h>
using namespace std;

int main(){
    double r1,r2;//两个电阻阻抗大小
    cin>>r1>>r2;
    cout<<fixed<<setprecision(2)<<1 / ( 1 / r1 + 1 / r2);
    return 0;//好习惯
}