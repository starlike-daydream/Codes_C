#include<iostream>
using namespace std;
const int N = 1e5 + 10;
using ll = long long;
ll a[N], diff[N], prefix[N];

int main() {
    // ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n, p, q, l, r, x;
    cin >> n >> p >> q;
    for (int i = 1;i <= n;i++) cin >> a[i];
    for (int i = 1;i <= n;i++) diff[i] = a[i] - a[i - 1];
    for (int i = 1;i <= n;i++) cout << diff[i] << (i == n ? '\n' : ' ');
    while (p--) {
        cin >> l >> r >> x;
        diff[l] += x;
        diff[r + 1] -= x;
    }
    // for (int i = 1;i <= n;i++) cout << diff[i] << (i == n ? '\n' : ' ');
    for (int i = 1;i <= n;i++) a[i] = diff[i] + a[i - 1];
    for (int i = 1;i <= n;i++) prefix[i] = a[i] + prefix[i - 1];
    // for (int i = 1;i <= n;i++) cout << prefix[i] << (i == n ? '\n' : ' ');
    while (q--) {
        cin >> l >> r;
        cout << prefix[r] - prefix[l - 1] << '\n';
    }
    return 0;
}