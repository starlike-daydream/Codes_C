#include<bits/stdc++.h>
using namespace std;
typedef struct {
    int w, v;
}gold;
bool cmp(gold a, gold b) {
    return a.v * b.w > b.v * a.w;
}
int main() {
    gold golds[110];
    int n, t;
    double take = 0;
    cin >> n >> t;
    for (int i = 0;i < n;i++)
        cin >> golds[i].w >> golds[i].v;
    sort(golds, golds+n, cmp);
    for (int i = 0;i < n;i++) {
        if (t - golds[i].w > 0) {
            take += golds[i].v;
            t -= golds[i].w;
        }
        else {
            take += t * 1.0 * golds[i].v / golds[i].w);
            break;
        }
    }
    for(int i = 0;i < int(sizeof(golds))/4;i++){
        cout<<golds[i].v/gold<<' ';
    }
    cout<<endl;
    printf("%.2f", take);
    return 0;
}