#include<iostream>
#include<cstring>
using namespace std;

int main() {
    int grid[1010][1010],n;
    memset(grid, 0, sizeof(grid));
    int x1, x2, y1, y2, m;
    cin >> n >> m;
    for (int i = 0;i < m;i++) {
        cin >> x1 >> y1 >> x2 >> y2;
        for (int j = x1;j <= x2;j++)
            for (int k = y1;k <= y2;k++)
                grid[j][k]++;
    }
    for (int i = 1;i <= n;i++) 
        for (int j = 1;j <= n;j++) 
            cout << grid[i][j] << (j == n ? '\n' : ' ');
    return 0;
}