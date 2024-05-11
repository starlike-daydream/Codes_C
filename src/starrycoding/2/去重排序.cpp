#include<bits/stdc++.h>
using namespace std;
vector<int> a;

signed main() {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int n,x;
    cin >> n;
    while (n--) {
        cin >> x;
        a.push_back(x);
    }
    sort(a.begin(), a.end());
    a.erase(unique(a.begin(), a.end()), a.end());
    for (auto &i : a) cout << i << ' ';
    return 0;
}