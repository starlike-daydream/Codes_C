#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 9;
int a[N];
#define int long long
// int a[]={};
int count(int n) {
    int c1 = 0;
    string s = "";
    while (n) s = to_string(n % 2) + s, n /= 2;
    for (int i = 0;i < s.size();i++)
        if (s[i] == '1') c1++;
    return c1;
}

signed main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    // int o; while(cin>>o) cout<<o<<',';return 0;
    int t, idx = 0;
    for (int i = 1;i <= 1e18 + 100;i++)
        if (count(i) <= 2) a[idx++] = i;
    for (int i = 0;i < idx;i++)
        cout << a[i] << ' ';
    cout << '\n';
    cout << idx << '\n';
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        bool flag = binary_search(a, a + idx, x);
        if (flag) cout << *upper_bound(a, a + idx, x) << '\n';
        else cout << count(x) << '\n';
    }
    return 0;
}