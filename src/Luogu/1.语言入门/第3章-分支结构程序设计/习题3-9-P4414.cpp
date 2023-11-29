#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    char c1,c2,c3;
    cin>>a>>b>>c>>c1>>c2>>c3;
    if(a>b)
        swap(a,b);
    if(b>c)
        swap(b,c);
    if(a>b)
        swap(a,b);
    if(c1=='A')
        if(c2=='B')
            cout<<a<<" "<<b<<" "<<c;
        else
            cout<<a<<" "<<c<<" "<<b;
    else if(c1=='B')
        if(c2=='A')
            cout<<b<<" "<<a<<" "<<c;
        else
            cout<<b<<" "<<c<<" "<<a;
    else
        if(c2=='A')
            cout<<c<<" "<<a<<" "<<b;
        else
            cout<<c<<" "<<b<<" "<<a;
    return 0;
}