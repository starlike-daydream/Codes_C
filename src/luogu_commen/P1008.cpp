#include<bits/stdc++.h>
using namespace std;
#define for(i) for(int i=1;i<=9;i++)

int main() {
    int a, b, c, jump = 0, flag[10] = { 0 };
    for (i) for (j) for (k)  for (p) for (o) for (u) for (n) for (m) for (h) {
        flag[i]++, flag[j]++, flag[k]++, flag[p]++, flag[o]++, flag[u]++, flag[n]++, flag[m]++, flag[h]++;
        for (r) if (flag[r] != 1) { jump = 1;break; }
        for (r) flag[r] = 0;
        if (jump) { jump = 0; continue; }
        if (2 * (a = i * 100 + j * 10 + k) == (b = p * 100 + o * 10 + u) && 3 * a == (c = n * 100 + m * 10 + h))
            cout << a << ' ' << b << ' ' << c << '\n';
    }
    return 0;
}