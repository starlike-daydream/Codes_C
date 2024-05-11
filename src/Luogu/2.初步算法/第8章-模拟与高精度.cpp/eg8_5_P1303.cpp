#include<iostream>
using namespace std;
const int N = 1e4 + 10;
short a[N], b[N], c[N];

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    int lena = s1.size(), lenb = s2.size();
    // if (a == "0" || b == "0") {
    //     cout << 0;
    //     return 0;
    // }
    for (int i = 1;i <= lena;i++) a[i] = s1[lena - i] - '0';
    for (int i = 1;i <= lenb;i++) b[i] = s2[lenb - i] - '0';
    // cout << "a:";for (int i = s1.size();i >= 1;i--) cout << a[i];cout << '\n';
    // cout << "b:";for (int i = s2.size();i >= 1;i--) cout << b[i];cout << '\n';
    for (int i = 1;i <= lena;i++)
        for (int j = 1;j <= lenb;j++)
            c[i + j - 1] += a[i] * b[j];
    int lenc = lena + lenb - 1;
    for (int i = 1;i <= lenc;i++) c[i + 1] += c[i] / 10, c[i] %= 10;
    if (c[lenc + 1]) lenc++; //进位使长度发生变化
    while (!c[lenc] && lenc > 1) lenc--; //出现0*大于1位数的数时，长度计算会出问题，这时候要重新计算长度,也可以出现0就输出0
    for (int i = lenc;i >= 1;i--) cout << c[i];
    return 0;
}