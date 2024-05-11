#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int map[205][205];
int flag[205];
int v[205];
// typedef struct{
//     int id,cost;
// }ok;
// bool cmp(ok a,ok b){
//     if(a.cost==b.cost) return a.id<b.id;
//     return a.cost<b.cost;
// }
// ok oks[100010];

int main(){
    int n,m,k,cnt=0,cost_min=2e9,id_min=0;
    cin>>n>>m;
    while(m--){
        int v1,v2,cost;
        cin>>v1>>v2>>cost;
        map[v1][v2]=cost;
        map[v2][v1]=cost;
    }
    cin>>k;
    loop:for(int l,i=1;i<=k;i++){
        cin>>l;
        bool flag_all=0;
        int cost_all=0;
        memset(flag,0,sizeof flag);
        for(int j=1;j<=l;j++) cin>>v[j];
        if(map[0][v[1]]) cost_all=map[0][v[1]];
        else continue;
        for(int j=1;j<l;j++) cost_all+=map[v[j]][v[j+1]],flag[v[j]]++;
        flag[v[l]]++;
        // for(int j=1;j<=n;j++) cout<<flag[j]<<(j<n?' ':'\n');
        if(map[v[l]][0]) cost_all+=map[v[l]][0];
        else continue;
        for(int j=1;j<=n;j++)
            if(flag[j]!=1){
                flag_all=1;
                break;
            }
        if(flag_all) continue;
        // cout<<i<<' '<<cost_all<<'\n';
        // oks[cnt].id=i;
        // oks[cnt].cost=cost_all;
        cnt++;
        // cout<<oks[idx].id<<' '<<oks[i].cost<<'\n';
        // idx++;
        if(cost_all<cost_min) cost_min=cost_all,id_min=i;
    }
    // sort(oks,oks+cnt,cmp);
    // for(int i=0;i<idx;i++){
    //     cout<<oks[i].id<<' '<<oks[i].cost<<'\n';
    // }
    // cout<<cnt<<'\n'<<oks[0].id<<' '<<oks[0].cost;
    cout<<cnt<<'\n'<<id_min<<' '<<cost_min;
    return 0;
}