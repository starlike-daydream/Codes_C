#include<bits/stdc++.h>
using namespace std;
#define ll long long
// ll road(int, int);
int moves[][2] = { {1,2},{-1,-2},{1,-2},{2,-1},{2,1},{-1,2},{-2,1},{-2,-1},{0,0} };
int n, m, x_horse, y_horse, a, b;
const int N = 25;
ll ans[N][N];
bool vis[N][N];
int main() {
    cin >> n >> m >> x_horse >> y_horse;
    // n = 2, m = 2, x_horse = 3, y_horse = 3;
    for (int i = 0;i < 9;i++) {
        if ((a = x_horse + moves[i][0]) < 0 || (b = y_horse + moves[i][1]) < 0)
            continue;
    //     cout<<a<<' '<<b<<endl;
        vis[a][b] = 1;
    //     ans[a][b] = 0;
    }
    // 一行一列的计算
    for (int i = 0;i <= n;i++) {
        for (int j = 0;j <= m;j++) {
            if (vis[i][j])
                ans[i][j] = 0;
            else if (i == 0 && j == 0)
                ans[i][j] = 1;
            else if (i == 0)
                ans[i][j] = ans[i][j - 1];
            else if (j == 0)
                ans[i][j] = ans[i - 1][j];
            else
                ans[i][j] = ans[i - 1][j] + ans[i][j - 1];
        }
    }
    cout<<ans[n][m]<<endl;
    // cout << road(n, m) << endl;
    for (int i = 0;i < 25;i++)
        for (int j = 0;j < 25;j++)
            cout << ans[i][j] << (j == 24 ? '\n' : ' ');
    // cout << endl;
    // for (int i = 0;i < 25;i++)
    //     for (int j = 0;j < 25;j++)
    //         cout << vis[i][j] << (j == 24 ? '\n' : ' ');
    // return 0;
}
// ll road(int x, int y) {
    // if (vis[x][y] == 1)
    //     return ans[x][y];
    // if (x == 0 && y == 0) {
        // vis[x][y] = 1;
        // return ans[x][y] = 0;
        // return 0;
    // }
    // if (x == 0 || y == 0) {
        // vis[x][y] = 1;
        // return ans[x][y] = 1;
    //     return 1;
    // }
    // for (int i = 0;i < 9;i++)
        // if (x == (a = x_horse + moves[i][0]) && y == (b = y_horse + moves[i][1])) {
        // if (x == x_horse + moves[i][0] && y == y_horse + moves[i][1]) {
            // if (a < 0 || b < 0)
            //     continue;
            // vis[x][y] = 1;
            // return ans[x][y]=0;
            // return 0;
        // }
    // vis[x][y] = 1;
    // return road(x, y - 1) + road(x - 1, y);
    // return ans[x][y] = road(x, y - 1) + road(x - 1, y);
// }