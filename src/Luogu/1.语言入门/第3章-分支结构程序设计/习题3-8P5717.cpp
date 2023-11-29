#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b)
        swap(a,b);
    if(b>c)
        swap(b,c);
    if(a+b<=c||a+c<=b||b+c<=a){
        cout<<"Not triangle"<<endl;
        return 0;
    }
    if(a*a+b*b==c*c)
        cout<<"Right triangle"<<endl;
    if(a*a+b*b<c*c)
        cout<<"Obtuse triangle"<<endl;
    if(a*a+b*b>c*c)
        cout<<"Acute triangle"<<endl;
    if(a==b||a==c||b==c)
        cout<<"Isosceles triangle"<<endl;
    if(a==b&&b==c)
        cout<<"Equilateral triangle"<<endl;
    return 0;
}