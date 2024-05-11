#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5 + 10;
int input[N];
int pop[N];
#define endl '\n'

signed main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int m, n, k;
    cin >> m >> n >> k;
    while (k--) {
        for (int i = 1;i <= n;i++)
            cin >> input[i];
        bool flag = 1;
        int len = 0;
        for (int i = 1;i <= n;i++) {
            int idx = i + 1,sn=1;
            for (int j = input[i] - 1;j >= 1;j--) {
                while (input[i] < input[idx])
                    idx++;
                if (find(pop, pop + len, j) == pop + len and j != input[idx]) {
                    // cout << input[i] << ' ' << j << endl;
                    // cout << "pop:";
                    // for (int k = 0;k < len;k++) {
                    //     cout << pop[k] << ' ';
                    // }
                    // cout << endl;
                    flag = 0;
                    cout << "NO\n";
                    break;
                }
                else if (j == input[idx]) {
                    idx++;
                    sn++;
                    if (sn > m) {
                        // cout << input[i] << ' ' << j << ' '<<m<<endl;
                        // cout << "pop:";
                        // for (int k = 0;k < len;k++) {
                        //     cout << pop[k] << ' ';
                        // }
                        // cout << endl;
                        flag = 0;
                        cout << "NO\n";
                        break;
                    }
                }
                else {
                    sn = 1;
                }
            }
            if (flag == 0)
                break;
            pop[len++] = input[i];
        }
        if (flag)
            cout << "YES\n";
    }
    return 0;
}