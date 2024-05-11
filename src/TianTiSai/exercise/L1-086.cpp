#include<bits/stdc++.h>
using namespace std;

int main() {
    string a, s1 = "", b, s2 = "";
    cin >> a >> b;
    for (int i = 1, ai, bi; i < a.size(); i++)
        if ((ai = int(a[i])) % 2 == (bi = int(a[i - 1])) % 2)
            s1 += max(ai, bi);
    for (int i = 1, ai, bi; i < b.size(); i++)
        if ((ai = int(b[i])) % 2 == (bi = int(b[i - 1])) % 2)
            s2 += max(ai, bi);
    cout << s1 << (s1 == s2 ? "\n" : "\n"+s2) << endl;
    return 0;
}