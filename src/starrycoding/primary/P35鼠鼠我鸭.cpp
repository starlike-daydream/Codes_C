#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5 + 10;
#define endl '\n'
int cate[N], weight[N];
ll prefix_duck[N], prefix_mouse[N];

signed main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        for (int i = 1;i <= n;i++) cin >> cate[i];
        for (int i = 1;i <= n;i++) cin >> weight[i];
        for (int i = 1;i <= n;i++) prefix_duck[i] = prefix_duck[i - 1] + (cate[i] ? weight[i] : 0);
        // cout << "prefix_duck:";
        // for (int i = 1;i <= n;i++) cout << prefix_duck[i] << (i < n ? ' ' : '\n');
        for (int i = 1;i <= n;i++) prefix_mouse[i] = prefix_mouse[i - 1] + (cate[i] ? 0 : weight[i]);
        // cout << "prefix_mouse:";
        // for (int i = 1;i <= n;i++) cout << prefix_mouse[i] << (i < n ? ' ' : '\n');
        int maxl, maxr;
        ll sum, maxn = 0;
        for (int l = 1;l <= n;l++) {
            for (int r = l;r <= n;r++) {
                sum = (prefix_mouse[r] - prefix_mouse[l - 1]) - (prefix_duck[r] - prefix_duck[l - 1]);
                // cout << l << ' ' << r << ' ' << sum << endl;
                if (maxn < sum) maxn = sum, maxl = l, maxr = r;
            }
        }
        // cout << "maxl:" << maxl << " " << "maxr:" << maxr << endl;
        ll duck = 0;
        for (int i = maxl;i <= maxr;i++) cate[i] = 1;
        for (int i = 1;i <= n;i++) if (cate[i]) duck += weight[i];
        cout << duck << endl;
    }
    return 0;
}