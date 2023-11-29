#include<bits/stdc++.h>
using namespace std;
double f(double,double),x,n;
// B2147 求 f(x,n)
int main(){
    cin>>x>>n;
    printf("%.2f",f(x,n));
    return 0;
}

double f(double x,double n){
    if(n == 1)
        return sqrt(1+x);
    return sqrt(n+f(x,n-1));
}