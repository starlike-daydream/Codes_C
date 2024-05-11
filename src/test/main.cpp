#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
int main() {
    ll n;
    cin >> n;
    // ll n = 2e9;
    ll sum = 0;
    clock_t st = clock();
    for (int i = 0;i <= n;++i) sum += i;
    // for (int i = 0;i <= n - 3;i += 4) sum += i + (i + 1) + (i + 2) + (i + 3);
    // for (int i = n - n % 4 + 1;i <= n;i++) sum += i;
    cout << "sum:" << sum << endl;
    clock_t ed = clock();
    cout << "time:" << ed - st << "ms" << endl;
    return 0;
}