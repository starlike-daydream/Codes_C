#include<bits/stdc++.h>
using namespace std;

char cell[110][110];
bool Acell[110][110];
int n, m, cnt = 0, vis[110][110];
int moves[][2] = { {0,1},{1,0},{0,-1},{-1,0} };

void dfs(int, int);
bool isCell(char);
void oneCell(int, int);

int main() {
    cin >> n >> m;
    for (int i = 0;i < n;i++)
        for (int j = 0;j < m;j++)
            cin >> cell[i][j];
    dfs(0, 0);
    cout << cnt << endl;
    return 0;
}
void dfs(int x, int y) {
    if (vis[x][y] == 0 && x < n && y < m) {
        if (isCell(cell[x][y])&&Acell[x][y]==0) {
            oneCell(x, y);
            cnt++;
        }
        vis[x][y] = 1;
        for (int i = 0;i < 2;i++)
            dfs(x + moves[i][0], y + moves[i][1]);
    }
}
bool isCell(char c) {
    if (c >= '1' && c <= '9')
        return 1;
    return 0;
}
void oneCell(int x, int y) {
    if (Acell[x][y] == 0 && isCell(cell[x][y]) && x < n && y < m && x >= 0 && y >= 0) {
        Acell[x][y] = 1;
        for (int i = 0;i < 4;i++)
            oneCell(x + moves[i][0], y + moves[i][1]);
    }
}
