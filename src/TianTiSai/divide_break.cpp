#include<bits/stdc++.h>
using namespace std;
int v1[10010], v2[10010];
// bool flag[10010];
int main() {
    int n, m, k, attack, attack_index;
    cin >> n >> m;
    for (int i = 0;i < m;i++)
        cin >> v1[i] >> v2[i];
    cin >> k;
    while (k--) {
        cin >> attack;
        bool feasibility = 1;
        // memset(flag, 0, sizeof(flag));
        bool flag[10010]={0};
        for (int i = 0;i < attack;i++) {
            cin >> attack_index;
            flag[attack_index] = 1;
        }
        for (int i = 0;i < m;i++)
            if (flag[v1[i]] || flag[v2[i]])
                continue;
            else {
                feasibility = 0;
                break;
            }
        if (feasibility)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}