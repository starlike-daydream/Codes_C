#include<bits/stdc++.h>
using namespace std;
int n, a, b;
typedef struct {
    int floor;
    int count;
}lift;
int visit[205];
int movement[205];
void bfs();
int main() {
    scanf("%d%d%d", &n, &a, &b);
    for (int i = 1;i <= n;i++) {
        scanf("%d", &movement[i]);
    }
    bfs();
    return 1;
}
void bfs() {
    queue<lift> q;
    lift start, next, current;
    start.floor = a;
    start.count = 0;
    q.push(start);
    while (!q.empty()) {
        lift current = q.front();
        // printf("%d %d\n", current.floor,current.count);
        q.pop();
        if (current.floor == b) {
            printf("%d", current.count);
            return;
        };
        next.floor = current.floor + movement[current.floor];
        if (next.floor <= n) {
            if (visit[next.floor] == 0) {
                visit[next.floor] = 1;
                next.count = current.count + 1;
                q.push(next);
            }
        }
        next.floor = current.floor - movement[current.floor];
        if (next.floor >= 1) {
            if (visit[next.floor] == 0) {
                visit[next.floor] = 1;
                next.count = current.count + 1;
                q.push(next);
            }
        }
    }
    printf("-1");
}