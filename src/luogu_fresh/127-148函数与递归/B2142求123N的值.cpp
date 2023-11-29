#include<bits/stdc++.h>
#define ll long long;
#define IOS ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
int n, getSum(int);

int main(){
    cin>>n;
    cout<<getSum(n);
    return 0;
}

int getSum(int n){
    if(n == 1)
        return 1;
    return getSum(n-1) + n;
}