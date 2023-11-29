#include<bits/stdc++.h>
using namespace std;
int akm(int,int),m,n;
// B2144 阿克曼(Ackmann)函数
int main(){
    cin>>m>>n;
    cout<<akm(m,n)<<endl;
    return 0;
}

int akm(int m,int n){
    if(m == 0)
        return n + 1;
    if(n == 0 && m > 0)
        return akm(m-1,1);
    if(m > 0 && n > 0)
        return akm(m-1,akm(m,n-1));
    return 0;
}