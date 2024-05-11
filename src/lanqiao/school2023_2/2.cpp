#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll res = 1;
    for(int i = 1; i <= 2023 ; i++ ){
        res *= 2;
        res %= 1000;
    }
    cout<<res<<endl;
    return 0;
}
/*
问题描述
　　求 2**2023%1000，即 2的2023次方除以1000的余数。
答案提交
　　这是一道结果填空的题，你只需要算出结果后提交即可。本题的结果为一个整数，在提交答案时只填写这个整数，填写多余的内容将无法得分。
*/