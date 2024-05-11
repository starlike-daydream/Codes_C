#include<bits/stdc++.h>
using namespace std;
int monsters[300010], t, n, k, N;
int main() {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    cin >> t;
    while (t--) {
        cin >> n >> k;
        for (int i = 0;i < n;i++)
            cin >> monsters[i];
        for (;;) {
            N = 0;
            int index = -1;
            for (int j = 0; j < n; j++)
                if (N < monsters[j]) {
                    N = monsters[j];
                    index = j;
                }
            if (N <= 0)
                break;
            monsters[index] -= k;
            if (monsters[index] <= 0)
                cout << index + 1 << ' ';
        }
        cout << '\n';
    }
}