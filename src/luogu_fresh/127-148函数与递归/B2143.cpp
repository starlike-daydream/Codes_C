#include<bits/stdc++.h>
#define ll long long;
#define IOS ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
//进制转换
int main(){
    string s = "",c = "0123456789ABCDEF";
    int x,m,mod;
    cin>>x>>m;
    while (x > 0)
    {
        mod = x % m;
        s = c[mod] + s;
        x /= m;
    }
    cout<<s<<endl;
    return 0;
}