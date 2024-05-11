#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
bool flag[35][35] = { 0 };

int main() {
    int num, t, u, v, count, beautiful;
    string s;
    cin >> t;
    while (t--) {
        memset(flag, 0, sizeof(flag));
        beautiful = 1;
        count = 0;
        cin >> num;
        cin >> s;
        for (int i = 0;i < num - 1;i++) {
            cin >> u >> v;
            flag[u][v] = 1;
            flag[v][u] = 1;
        }
        for (int i = 0;i < num - 1;i++) {
            // cout << "flag"<<flag[i + 1][i + 2] << " ";
            // cout<<"s[i]:"<<s[i]<<" "<<s[i + 1]<<" ";
            // cout<<count<<endl;
            if (s[i] == s[i + 1] && flag[i + 1][i + 2]) {
                count++;
                if (count == 2) {
                    cout << "NO" << endl;
                    beautiful = 0;
                    break;
                }
            }
            else {
                count = 0;
            }
        }
        if (beautiful) {
            cout << "YES" << endl;
        }
    }
    return 0;
}
