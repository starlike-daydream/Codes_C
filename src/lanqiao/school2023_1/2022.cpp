#include<bits/stdc++.h>
using namespace std;
s to_16(int);
bool A_F(s);
s arr = "0123456789ABCDEF";
int main() {
    int n = 2022;
    for (;;n++) {
        s s = to_16(n);
        // cout<<s<<endl;
        if (A_F(s))
            break;
    }
    cout << n;
    return 0;
}
s to_16(int n) {
    s s = "";
    while (n) {
        s = arr[n % 16] + s;
        n /= 16;
    }
    return s;
}
bool A_F(s s) {
    bool flag0 = 1;
    for (int i = 0; i < s.size(); i++) {
        if (flag0 && s[i] != '0')
            flag0 = 0;
        if (!flag0 && !(s[i] >= 'A' && s[i] <= 'F'))
            return 0;
    }
    return 1;
}
