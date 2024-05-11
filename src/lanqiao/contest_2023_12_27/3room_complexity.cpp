#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, y;
    long long x;
    s s;
    cin >> n;
    while (n--) {
        cin >> x >> s >> y;
        if (s == "KB")
            x *= 1024;
        else if (s == "MB")
            x *= 1024 * 1024;
        cout << x / y << endl;
    }
    return 0;
}