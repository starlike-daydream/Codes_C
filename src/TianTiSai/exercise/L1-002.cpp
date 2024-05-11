#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main() {
    int n, n1, cnt = 0, times;
    char c;
    cin >> n >> c;
    for (n1 = n;n1 - (cnt == 0 ? 1 : (2 * cnt + 1) * 2) >= 0;cnt++)
        n1 -= cnt == 0 ? 1 : (2 * cnt + 1) * 2;
    for (int i = cnt;i >= 1;i--) {
        times = i * 2 - 1;
        for (int j = 0;j < cnt - i;j++)
            cout << ' ';
        for (int j = 0;j < times;j++)
            cout << c;
        cout << endl;
    }
    for (int i = 2;i <= cnt;i++) {
        times = i * 2 - 1;
        for (int j = 0;j < cnt - i;j++)
            cout << ' ';
        for (int j = 0;j < times;j++)
            cout << c;
        cout << endl;
    }
    cout << n1 << endl;
    return 0;
}