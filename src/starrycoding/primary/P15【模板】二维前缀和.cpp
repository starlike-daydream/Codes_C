#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e3 + 10;
int a[N][N];
ll prefix[N][N];
#define endl '\n'

signed main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n, m, q, sum = 0;
    cin >> n >> m >> q;
    for (int i = 1;i <= n;i++) {
        for (int j = 1;j <= m;j++) {
            cin >> a[i][j];
            // sum += a[i][j];
        }
    }
    // cout << "sum:" << sum << endl;
    for (int i = 1;i <= n;i++) {
        for (int j = 1;j <= m;j++) {
            prefix[i][j] = prefix[i][j - 1] + prefix[i - 1][j] + a[i][j] - prefix[i - 1][j - 1];
        }
    }
    // for (int i = 1;i <= n;i++) {
    //     for (int j = 1;j <= m;j++) {
    //         cout << prefix[i][j] << ' ';
    //     }
    //     cout << endl;
    // }
    while (q--) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        cout << prefix[x2][y2] + prefix[x1 - 1][y1 - 1] - prefix[x1 - 1][y2] - prefix[x2][y1 - 1] << endl;
    }
    return 0;
}