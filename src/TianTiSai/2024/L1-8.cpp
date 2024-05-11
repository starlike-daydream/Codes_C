#include<iostream>
#include<cstring>
using namespace std;
const int N = 1e5 + 10;
int a[10][10];
bool flag[N];
void memset0() {
    for (int i = 1;i <= 9;i++) flag[i] = 0;
}
void solve() {
    for (int i = 1;i <= 9;i++) {
        for (int j = 1;j <= 9;j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 1;i <= 9;i++) {
        // memset0();
        memset(flag, 0, sizeof flag);
        for (int j = 1;j <= 9;j++) {
            if (flag[a[i][j]]) {
                cout << 0 << '\n';
                return;
            }
            flag[a[i][j]] = 1;
        }
    }
    for (int i = 1;i <= 9;i++) {
        // memset0();
        memset(flag, 0, sizeof bool * sizeof flag);
        for (int j = 1;j <= 9;j++) {
            if (flag[a[j][i]]) {
                cout << 0 << '\n';
                return;
            }
            flag[a[j][i]] = 1;
        }
    }
    for (int k = 0;k <= 6;k += 3) {
        for (int l = 0;l <= 6;l += 3) {
            // memset0();
            memset(flag, 0, sizeof flag);
            for (int i = 1;i <= 3;i++) {
                for (int j = 1;j <= 3;j++) {
                    if (flag[a[i + k][j + l]]) {
                        cout << 0 << '\n';
                        return;
                    }
                    flag[a[i + k][j + l]] = 1;
                }
            }
        }
    }
    cout << 1 << '\n';
}

int main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    while (n--) solve();
    return 0;
}