#include<bits/stdc++.h>
using namespace std;
int ab[20010], n, minn = 1, maxn = 1;
int main() {
    cin >> n;
    for (int i = 1;i <= n;i++) {
        cin >> ab[i];
    }
    sort(ab + 1, ab + n + 1);
    for (int i = 2;i <= n;i++)
        if (ab[i] == ab[1])  minn++;
        else break;
    for (int i = n - 1;i >= 1;i--)
        if (ab[i] == ab[n])  maxn++;
        else break;
    cout << ab[1] << ' ' << minn << '\n' << ab[n] << ' ' << maxn;
    return 0;
}