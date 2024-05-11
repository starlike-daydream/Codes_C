#include<bits/stdc++.h>
using namespace std;
typedef struct {
    int cnt;
    int* arr;
}mode;
int n, m, * now, idx = 0, same = 1;
bool cmp(mode m1, mode m2) {
    if (m1.cnt == m2.cnt) {
        for (int i = 0;i < m;i++) {
            if (*(m1.arr + i) == *(m2.arr + i)) {
                continue;
            }
            else {
                return *(m1.arr + i) < *(m2.arr + i);
            }
        }
        return *(m1.arr + m - 1) < *(m2.arr + m - 1);
    }
    else {
        return m1.cnt > m2.cnt;
    }
};
mode modes[10010];
int num[10010][110];
int main() {
    cin >> n >> m;
    for (int i = 0;i < n;i++) {
        for (int j = 0;j < m;j++) {
            cin >> num[i][j];
        }
    }
    // for (int i = 0;i < n;i++) {
    //     sort(num[i], num[i] + m);
    // };
    bool flag = 1;
    for (int i = 0;i < n - 1;i++) {
        now = num[i];
        flag = 1;
        for (int j = 0;j < n;j++) {
            if (num[i][j] != num[i + 1][j]) {
                flag = 0;
                break;
            }
        }
        if (!flag) {
            modes[idx].arr = now;
            modes[idx].cnt = same;
            idx++;
            same = 1;
        }
        else
            same++;
    }
    sort(modes, modes + idx, cmp);
    cout << idx << endl;
    for (int i = 0;i < idx;i++) {
        cout << modes[i].cnt << ' ';
        for (int j = 0;j < m;j++) {
            cout << *(modes[i].arr + j) << ' ';
        }
        cout << '\n';
    }
    return 0;
}
