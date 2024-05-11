#include<bits/stdc++.h>
using namespace std;
int arr[510][510], temp[510][510];

int main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n, m;
    cin >> n >> m;
    for (int i = 1, num = 1;i <= n;i++)
        for (int j = 1;j <= n;j++)
            arr[i][j] = num++;
    while (m--) {
        int x, y, r, z;
        cin >> x >> y >> r >> z;
        int lx = x - r, rx = x + r, ly = y - r, ry = y + r;
        if (z == 0)
            for (int i = lx;i <= rx;i++)
                for (int j = ly;j <= ry;j++)
                    temp[x - y + j][x + y - i] = arr[i][j];
        else if (z == 1)
            for (int i = lx;i <= rx;i++)
                for (int j = ly;j <= ry;j++)
                    temp[y + x - j][y - x + i] = arr[i][j];
        for (int i = lx;i <= rx;i++)
            for (int j = ly;j <= ry;j++)
                arr[i][j] = temp[i][j];
    }
    for (int i = 1;i <= n;i++)
        for (int j = 1;j <= n;j++)
            cout << arr[i][j] << (j < n ? ' ' : '\n');
    return 0;
}