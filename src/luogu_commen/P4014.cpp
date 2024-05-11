#include<iostream>
using namespace std;
int n,time[60][60],get_max,get_min,cnt;
bool work[60];

void dfs_min(int count, int i) {
    cnt++;
    // if(count>get_min) return;
    if (i==n+1) {
        if (count < get_min)
            get_min = count;
        if (count > get_max)
            get_max = count;
        return;
    }
    // if(count<get_min)
        for(int j=1;j<=n;j++){
            if(work[j]==0){
                work[j] = 1;
                // cout << count + time[i][j] << ' ' << i + 1 << ' ' << j <<' '<<get_min<< endl;
                dfs_min(count + time[i][j], i + 1);
            }
            work[j]=0;
        }
}
void dfs_max(int count,int i){
    // if(count<get_max) return;
    if (i==n) {
        if (count > get_max)
            get_max = count;
        return;
    }
    // if(count>get_max)
        for(int j=1;j<=n;j++){
            if(work[j]==0){
                work[j] = 1;
                // cout << count + time[i][j] << ' ' << i + 1 << ' ' << j <<' '<<get_max<< endl;
                dfs_max(count + time[i][j], i + 1);
                work[j]=0;
            }
        }
}
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++)
            cin>>time[i][j];
        get_max+=time[i][i];
    }
    get_min = get_max;
    dfs_min(0, 1);
    // cout<<cnt<<endl;
    // dfs_max(0,1);
    cout<<get_min<<'\n'<<get_max;
}