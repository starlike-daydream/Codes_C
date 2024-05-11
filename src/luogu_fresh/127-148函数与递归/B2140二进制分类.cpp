#include<bits/stdc++.h>
#define ll long long;
#define IOS ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
s to_bin(int), s;

int main() {
    int n, a, b, sum_a = 0, sum_b = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        a = 0, b = 0;
        s = to_bin(i);
        for (int j = 0; j < s.size(); j++)
            if (s[j] == '1')
                a++;
            else
                b++;
        if (a > b)
            sum_a++;
        else
            sum_b++;
    }
    cout << sum_a << " " << sum_b;
    return 0;
}

s to_bin(int n) {
    s bin = "";
    while (n) {
        bin = to_string(n % 2) + bin;
        n /= 2;
    }
    return bin;
}