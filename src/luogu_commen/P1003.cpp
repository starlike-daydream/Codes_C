#include<bits/stdc++.h>
using namespace std;
const int N = 1e4 + 9;
int pave[N][4], n, x, y;

int main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> n;
    for (int i = 1;i <= n;i++)
        for (int j = 0;j < 4;j++)
            cin >> pave[i][j];
    cin >> x >> y;
    for (int i = n;i >= 1;i--)
        if (x >= pave[i][0] && x <= pave[i][0] + pave[i][2] && y >= pave[i][1] && y <= pave[i][1] + pave[i][3]) {
            cout << i;
            return 0;
        }
    cout << -1;
    return 0;
}