#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5 + 10;
#define endl '\n'
bool cate[N];
int w[N];
ll prefix[N];

signed main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        ll sum = 0;
        cin >> n;
        for (int i = 1;i <= n;i++) cin >> cate[i];
        for (int i = 1;i <= n;i++) cin >> w[i];
        for (int i = 1;i <= n;i++) if (cate[i]) sum += w[i], w[i] *= -1;
        for (int i = 1;i <= n;i++) prefix[i] = prefix[i - 1] + w[i];
        ll l, r, maxn = 0;
        for (int i = 1;i < n;i++)
            for (int j = i + 1;j <= n;j++) maxn = max(maxn, prefix[j] - prefix[i - 1]);
        for (int i = 1;i <= n;i++) maxn = max(maxn, prefix[i]);
        cout << sum + maxn << endl;
    }
    return 0;
}