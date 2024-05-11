#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+9;
int a[N];
bool flag[N];

int main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t,n,max=1,len;
    cin>>t;
    while(t--){
        cin>>n;
        max=0;
        for(int i=1;i<=n;i++) cin>>a[i];
        for(int i=1;i<n;i++){
            memset(flag,0,sizeof flag);
            len=1,flag[a[i]]=1;
            for(int j=i+1;j<=n;j++){
                if(flag[a[j]]) break;
                flag[a[j]]=1,len++;
            }
            if(len>max) max=len;
        }
        cout<<max<<'\n';
    }
    return 0;
}