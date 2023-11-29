#include<bits/stdc++.h>
using namespace std;

int main(){
    int x,n,sum=0;
    cin>>x>>n;
    while(n>0){
        n--;
        if(x>=1&&x<=5)
            sum+=250;
        x++;
        if(x==8)
            x=1;
    }
    cout<<sum;
}