#include<bits/stdc++.h>
using namespace std;
int hermite(int,int),x,n;
// B2146 Hermite 多项式
int main(){
    cin>>n>>x;
    cout<<hermite(n,x);
    return 0;
}

int hermite(int n,int x){
    if(n == 0)
        return 1;
    if(n == 1)
        return 2 * x;
    if(n > 1)
        return 2*x*hermite(n-1,x)-2*(n-1)*hermite(n-2,x); 
    return 0;
}