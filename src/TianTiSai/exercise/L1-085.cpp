#include<bits/stdc++.h>
using namespace std;
bool vis[10][10];
int rollDice(int id) {
    for (int i = 6;i >= 1;i--) {
        if (vis[id][i] != 1) {
            vis[id][i] = 1;
            return i;
        }
    }
}
int main() {
    int n, id;
    for (int i = 1;i <= 6;i++) {
        cin >> id;
        vis[i][id] = 1;
    }
    cin >> n;
    for (int i = 1;i <= 6;i++)
        for (int j = 1;j <= n;j++)
            if (j == n) cout << rollDice(i) << (i == 6 ? '\n' : ' ');
            else rollDice(i);
    return 0;
}