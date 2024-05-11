#include <iostream>
#pragma GCC optimize(3,"Ofast","inline")
using ll = long long;
const ll N = 1e5+9,M = 5e9;
using std::cin, std::cout, std::ios;
ll a[N],diff[N];
int main() {
    // cout << (LONG_LONG_MAX > 9.22337e18) << '\n';return 0;
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    ll n, p, q, t, l, r, k;
    ll ss, sum, res;
    cin >> n >> p;
    for (int i = 1; i <= n; i++) cin >> a[i];
    cin >> q;
    while (q--) {
        // for (int j = 1; j <= n; j++) printf("%lld ", *(a + j)); printf("\n");
        cin >> t >> l >> r >> k;
        if (t == 1) {
            for (int i = l; i <= r; i++) {
                if ((a[i] = a[i] + k) > M) a[i] %= p;
            }
            // for (int i = 1;i <= n;i++) diff[i] = a[i] - a[i - 1],diff[i]%=p;
            // diff[l] += k, diff[r + 1] -= k;
            // for (int i = 1;i <= n;i++) 
            // if ((a[i] = a[i - 1] + diff[i]) > M) a[i] %= p;
            // a[i] = a[i - 1] + diff[i], a[i] %= p;
        }
        else if (t == 2)
            for (int i = l; i <= r; i++) {
                if ((a[i] = a[i] * k) > M) a[i] %= p;
            }
        else if (t == 3) {
            for (int i = l; i <= r; i++) {
                if (k == 0) a[i] = 1;
                else {
                    res = 1;
                    for (int j = 1; j <= k; j++) if ((res = res * a[i]) > M) res %= p;
                    a[i] = res;
                }
            }
        }else if (t == 4) {
            sum = 0;
            for (int i = l; i <= r; i++) {
                if (k == 0) sum += 1;
                else {
                    res = 1;
                    for (int j = 0;j < k;j++) if ((res = res * a[i]) > M) res %= p;
                    if ((sum = sum + res) > M) sum %= p;
                }
            }
            cout << sum % p << '\n';
        }else if (t == 5) {
            ss = 1;
            for (int i = l; i <= r; i++) if ((ss = ss * a[i]) > M) ss %= p;
            cout << ss % p << '\n';
        }
    }
    return 0;
}

/*
5 29
5 2 4 1 3
9
4 2 4 1
1 1 3 2
2 2 4 3
3 3 5 2
5 3 3 0
4 1 5 2
2 3 5 0
3 2 4 0
4 3 4 1
*/