#include<bits/stdc++.h>
using namespace std;
typedef struct{
    int h,t,w;
}book;
book bs[200010];
bool cmp(const book& a, const book& b) {
    // if (a.h == b.h && a.t == b.t)return a.w > b.w;
    // if (a.h == = b.h)return a.t > b.t;
    // return a.h > b.h;
    if (a.h == b.h)
        if(a.t==b.t) return a.w>b.w;
        else return a.t>b.t;
    return a.h>b.h;
}

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++) cin>>bs[i].h>>bs[i].t>>bs[i].w;
    sort(bs+1,bs+n+1,cmp);
    for(int i=1;i<=n;i++) cout<<bs[i].h<<' '<<bs[i].t<<' '<<bs[i].w<<'\n';
    return 0;
}