#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 10;
struct Book {
    int a, b, c;
    bool operator < (const Book& u) const {
        if (a == u.a)
            if (b == u.b)return c < u.c;
            else return b < u.b;
        return a < u.a;
    }
}p[N];

signed main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n;cin >> n;
    for (int i = 1;i <= n;i++) cin >> p[i].a >> p[i].b >> p[i].c;
    sort(p + 1, p + n + 1);
    reverse(p + 1, p + n + 1);
    for (int i = 1;i <= n;i++) cout << p[i].a << ' ' << p[i].b << ' ' << p[i].c << '\n';
    return 0;
}