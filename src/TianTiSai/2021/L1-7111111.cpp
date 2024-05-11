#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll l, ans, n;
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    cin >> n;
    s s = "1";
    for (;;s += "1") {
        l = stoll(s);
        if (l % n == 0) {
            ans = l / n;
            break;
        }
    }
    cout << ans << " " << s.size() << endl;
    return 0;
}