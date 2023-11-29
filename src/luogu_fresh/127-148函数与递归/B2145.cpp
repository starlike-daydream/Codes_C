#include<bits/stdc++.h>
using namespace std;
int n,k,digit(int,int);

//B2145 digit 函数
int main(){
    cin>>n>>k;
    cout<<digit(n,k);
    return 0;
}

int digit(int n,int k){
    for (int i = 1; i < k; n/=10,i++);
    return n % 10;
}