#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e3 + 10;
#define endl '\n'
int a[N][N], d[N][N];

int main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n, m, q;
    cin >> n >> m >> q;
    for (int i = 1;i <= n;i++)
        for (int j = 1;j <= m;j++)
            cin >> a[i][j];
    //给大小为一的矩形的元素进行修改
    for (int i = 1;i <= n;i++)
        for (int j = 1;j <= m;j++) {
            d[i][j] += a[i][j];
            d[i + 1][j] -= a[i][j];
            d[i][j + 1] -= a[i][j];
            d[i + 1][j + 1] += a[i][j];
        }
    // for (int i = 1;i <= n;i++)
    //     for (int j = 1;j <= m;j++)
    //         cout << d[i][j] << (j < m ? ' ' : '\n');
    while (q--) {
        int x1, x2, y1, y2, c;
        cin >> x1 >> y1 >> x2 >> y2 >> c;
        d[x1][y1] += c, d[x1][y2 + 1] -= c, d[x2 + 1][y1] -= c, d[x2 + 1][y2 + 1] += c;
    }
    for (int i = 1;i <= n;i++)
        for (int j = 1;j <= m;j++)
            cout << (a[i][j] = a[i - 1][j] + a[i][j - 1] + d[i][j] - a[i - 1][j - 1]) << (j < m ? ' ' : '\n');
    return 0;
}