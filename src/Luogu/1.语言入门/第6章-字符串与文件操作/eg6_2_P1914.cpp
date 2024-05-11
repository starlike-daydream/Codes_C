#include<iostream>
using namespace std;
#define endl '\n'

signed main() {
    // ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n;
    // string s;
    char s[60];
    scanf("%d%s", &n, &s);
    // cin >> n >> s;
    for (int i = 0;s[i];i++) {
        // if (s[i] + n > 'z') s[i] = 'a' + (s[i] + n) % (int('z') + 1);
        // else s[i] += n;
        putchar('a' + (s[i] - 'a' + n) % 26);
    }
    // cout << s << endl;
    return 0;
}