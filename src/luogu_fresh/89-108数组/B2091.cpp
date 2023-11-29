#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n],b[n],result=0;
    for (int i = 0; i < n; i++)
        cin>>a[i];
    for (int i = 0; i < n; i++)
        cin>>b[i];
    for (int i = 0; i < n; i++)
        result += a[i] * b[i];
    cout<<result;
    return 0;
}