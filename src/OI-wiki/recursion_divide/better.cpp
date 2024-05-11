#include<iostream>
using namespace std;
#define N 10010
int is_working[N];
int work[N][N];
int cost_time_all_min = 0;
int n;

void dfs(int count, int i, int j) {
    if (count > cost_time_all_min) return;
    if (j > n && count < cost_time_all_min) cost_time_all_min = count;
    for (;!is_working[j] && j <= n;j++) {
        is_working[j] = 1;
        // cout << i << ' ' << j << ' ' << count << endl;
        dfs(count + work[i][j], i + 1, j + 1);
    }
    is_working[j] = 0;
    dfs(count, i,j);
}

int main() {
    cin >> n;
    for (int i = 1;i <= n;i++)
        for (int j = 1;j <= n;j++)
            cin >> work[i][j];
    for (int i = 1;i <= n;i++)
        cost_time_all_min += work[i][i];
    cout << cost_time_all_min << endl;
    dfs(0, 1, 1);
    cout << cost_time_all_min;
    return 0;
}