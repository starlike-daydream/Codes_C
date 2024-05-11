#include<bits/stdc++.h>
using namespace std;
#define append push_back
void change(int x, int y, int r, int z, vector<vector<int>>& a) {
    x--, y--;
    int x_min = max(0, x - r), x_max = min(int(a.size() - 1), x + r), y_min = max(0, y - r), y_max = min(int(a[0].size() - 1), y + r);
    vector<vector<int>> b;
    vector<int> t1;
    for (int i = x_min;i < x_max + 1;i++) {
        for (int j = y_min;j < y_max + 1;j++) {
            t1.append(a[i][j]);
        }
        b.append(t1);
        t1.clear();
    }
    vector<vector<int>> result;
    vector<int> t2;
    if (z == 0) {
        for (int i = 0;i < b[0].size();i++) {
            for (int j = b.size() - 1; j > -1; j--) {
                t2.append(b[j][i]);
            }
            result.append(t2);
            t2.clear();
        }
    }
    else if (z == 1) {
        for (int i = b.size() - 1;i > -1;i--) {
            for (int j = 0; j < b[0].size(); j++) {
                t2.append(b[j][i]);
            }
            result.append(t2);
            t2.clear();
        }
    }
    for (int i = x_min, index1 = 0;i < x_max + 1;i++, index1++) {
        for (int j = y_min, index2 = 0;j < y_max + 1;j++, index2++) {
            a[i][j] = result[index1][index2];
        }
    }
}
int main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a;
    vector<int> temp;
    for (int i = 1;i < n * n + 1;i++) {
        temp.append(i);
        if (i % n == 0) {
            a.append(temp);
            temp.clear();
        }
    }
    while (m--) {
        int x, y, r, z;
        cin >> x >> y >> r >> z;
        change(x, y, r, z, a);+
    }
    for (int i = 0;i < n;i++)
        for (int j = 0;j < n;j++)
            cout << a[i][j] << (j < n - 1 ? ' ' : '\n');
    return 0;
}