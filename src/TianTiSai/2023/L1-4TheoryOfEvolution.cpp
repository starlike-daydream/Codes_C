#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main(){
    int n,a,b,ans;
    cin>>n;
    for(int i = 0;i < n;i++) {
        cin>>a>>b>>ans;
        if(a + b == ans)
            cout<<"Tu Dou"<<endl;
        else if(a * b == ans)
            cout<<"Lv Yan"<<endl;
        else
            cout<<"zhe du shi sha ya!"<<endl;
    }
    return 0;
}