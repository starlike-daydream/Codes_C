#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll n, sum = 0, nn = 1;
    cin >> n;
    for (ll i = 1;i <= n;i++) {
        nn *= i;
        sum += nn;
    }
    cout << sum;
    return 0;
}