#include<bits/stdc++.h>
using namespace std;
// #define N 20000
// bool arr[N][N];
bool flag[2][10000];

int main() {
    int n, m, q, t, c;
    cin >> n >> m >> q;
    int alive = n * m, c0 = 0, c1 = 0;
    while (q--) {
        cin >> t >> c;
        if (t == 0 && !flag[0][c] && c0 <= n && ++c0)
            alive -= m - c1, flag[0][c] = 1;
        // for (int i = 1;i <= m;i++)
                // arr[c][i] = 1;
        else if (t == 1 && !flag[1][c] && c1 <= m && ++c1)
            alive -= n - c0, flag[1][c] = 1;
        // for (int i = 1;i <= n;i++)
            // arr[i][c] = 1;
    }
    // int cnt = 0;
    // for (int i = 1;i <= n;i++)
        // for (int j = 1;j <= m;j++) 
            // if (!arr[i][j])
                // cnt++;
    // cout << cnt;
    cout << alive;
    return 0;
}