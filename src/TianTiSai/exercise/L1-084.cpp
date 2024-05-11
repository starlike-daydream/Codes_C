#include<bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, res;
    cin >> a >> b;
    res = c = a + b;
    while (--c)
        res *= c;
    cout << res << endl;
    return 0;
}