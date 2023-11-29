#include<bits/stdc++.h>
using namespace std;

int main(){
    double num;
    cin>>num;//录入浮点数
    cout<<(long long) num;//转化为长整数并输出
    return 0;
}

//思路：浮点数转化为整数会舍去小数部分，负数向上舍去（-2.3->-2）,正数向下舍去（2.3->2）