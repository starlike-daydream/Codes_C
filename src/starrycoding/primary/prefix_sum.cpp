#include<bits/stdc++.h>
using namespace std;
// using ll = long long;
#define int long long
const int N = 1e5 + 10;
#define endl '\n'
int a[N], prefix[N];

signed main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t,n,q,l,r;
    cin >> t;
    while (t--) {
        cin >> n >> q;
        // for (int i = 1;i <= n;i++) {
        //     cin >> a[i];
        //     a[i] += a[i - 1];
        // }
        for (int i = 1;i <= n;i++)
            cin >> a[i];
        for (int i = 1;i <= n;i++) {
            // cout<<prefix[i-1]<<' '<<a[i]<<endl;
            prefix[i] = prefix[i - 1] + a[i];
        }
        // for(int i = 1;i <= n;i++) {
            // cout << prefix[i] << (i == n? '\n' :' ');
        // }
        while (q--) {
            cin >> l >> r;
            cout<<prefix[r]-prefix[l-1]<<endl;
        }
    }
    return 0;
}