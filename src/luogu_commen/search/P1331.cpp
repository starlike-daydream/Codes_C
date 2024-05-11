#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define N 1050
char sea[N][N];
int vis[N][N];
int vis2[N][N], x_new, y_new;
int moves[][2] = { {0,1},{1,0},{-1,0},{0,-1} };//0:向右；1：向下；2：向上；3：向左
void bfs(), dfs(int, int);
int ignored[N][N];
int r, c, cnt = 0, num = 1,flag=0;
bool place = 1;
typedef struct {
    char val;
    int x, y;
}elem;
struct {
    int number, length, height, dir_x, dir_y;//战舰编号，长度，高度，从找到的点开始延伸的方向：x=1<--向下；x=-1<--向上；y=1<--向右；y=-1<--向左；
}warship;

int main() {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    cin >> r >> c;
    for (int i = 1;i <= r;i++)
        for (int j = 1;j <= c;j++)
            cin >> sea[i][j];
    bfs();
    if (place)
        cout << "There are " << cnt << " ships." << endl;
    else
        cout << "Bad placement." << endl;
    return 0;
}
void bfs() {
    queue<elem> q;
    int x, y;
    elem first, curr, next;
    first.x = 1, first.y = 1, first.val = sea[1][1];
    q.push(first);
    vis[first.x][first.y] = 1;
    while (!q.empty()) {
        curr = q.front();
        q.pop();
        if (curr.val == '#' && ignored[curr.x][curr.y] == 0) {
            cnt++;
            warship.number = cnt, warship.dir_x = 0, warship.dir_y = 0, warship.height = 1, warship.length = 1;
            dfs(curr.x, curr.y);
            for (int i = curr.x;i != curr.x + warship.height * (warship.dir_x == 0 ? 1 : warship.dir_x);i += warship.dir_x == 0 ? 1 : warship.dir_x) {
                for (int j = curr.y;j != curr.y + warship.length * (warship.dir_y == 0 ? 1 : warship.dir_y);j += warship.dir_y == 0 ? 1 : warship.dir_y) {
                    ignored[i][j] = warship.number;
                }
            }
            cout << curr.x << ' ' << curr.y << endl;
            cout << warship.dir_x << ' ' << warship.dir_y << endl;
            cout << warship.height << ' ' << warship.height << endl;
            for (int i = 1;i <= r;i++) {
                for (int j = 1;j <= c;j++)
                    cout << ignored[i][j];
                cout << endl;
            }
            cout << endl;
            memset(vis2, 0, sizeof vis2);
        }
        for (int i = 0;i < 4;i++) {
            x = curr.x + moves[i][0], y = curr.y + moves[i][1];
            // if (curr.val == '#' && sea[x][y] == '#')
                // ignored[x][y] = num;// 服了，写成==半天没发现，敲响警钟
            if (vis[x][y] != 1 && x >= 1 && y >= 1 && x <= r && y <= c) {
                next.val = sea[x][y], next.x = x, next.y = y;
                q.push(next);
                vis[x][y] = 1;
            }
        }
    }
}
void dfs(int x, int y) {
    if (ignored[x][y] != warship.number && ignored[x][y] != 0)
        place = 0;
    // ignored[x][y] = warship.number;
    vis2[x][y] = 1;
    flag = 0;
    for (int i = 0;i < 4;i++) {
        if (flag == 1)
            break;
        if (warship.dir_x == 1) {
            if (i == 2)
                continue;
        }
        else if (warship.dir_x == -1)
            if (i == 1)
                continue;
        if (warship.dir_y == 1) {
            if (i == 3)
                continue;
        }
        else if (warship.dir_y == -1)
            if (i == 0)
                continue;
        x_new = x + moves[i][0], y_new = y + moves[i][1];
        if (vis2[x_new][y_new] == 0 && x_new >= 1 && y_new >= 1 && x_new <= r && y_new <= c && sea[x_new][y_new] == '#') {
            if (i == 0 || i == 3) {
                if (i == 0)
                    warship.dir_y = 1;
                else
                    warship.dir_y = -1;
                if (sea[x_new - warship.dir_x][y_new] == '.')
                    return;
                warship.length++;
                cout << "x:" << x_new << ' ' << "y:" << y_new << " dir_x:" << warship.dir_x << " dir_y:" << warship.dir_y << endl;
            }
            else {
                if (i == 1)
                    warship.dir_x = 1;
                else
                    warship.dir_x = -1;
                if (sea[x_new][y_new - warship.dir_y] == '.')
                    return;
                warship.height++;
                cout << "x:" << x_new << ' ' << "y:" << y_new << " dir_x:" << warship.dir_x << " dir_y:" << warship.dir_y << endl;
            }
            dfs(x_new, y_new);
            flag = 1;
        }
    }
}