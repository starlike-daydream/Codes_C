#include<bits/stdc++.h>
using namespace std;
const int N = 5e6+9;
int a[N],diff[N];

int main(){
    int n,p,l,r,x;
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    cin>>n>>p;
    for(int i = 1; i <= n; i++) cin>>a[i];
    for(int i = 1; i <= n; i++) diff[i]=a[i]-a[i-1];
    while(p--) {
        cin>>l>>r>>x;
        diff[l]+=x,diff[r+1]-=x;
    }
    for(int i = 1;i <= n; i++) a[i]=a[i-1]+diff[i];
    int ans = a[1];
    for(int i = 2; i <= n; i++) ans=min(ans,a[i]);
    cout<<ans;
    return 0;
}