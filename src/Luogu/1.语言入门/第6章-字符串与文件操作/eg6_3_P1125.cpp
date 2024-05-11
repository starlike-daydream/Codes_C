#include<bits/stdc++.h>
using std::min;
using std::max;
int is_prime(int n) {
    for (int i = 2;i < n / i;i++)
        if (n % i == 0) return 0;
    return n >= 2 ? 1 : 0;
}

int main() {
    char s[110];
    scanf("%s", &s);
    int count[26] = { 0 };
    for (int i = 0;s[i];i++)
        count[s[i] - 'a']++;
    int maxn = -1, minn = 1e9;
    for (int i = 0;i < 26;i++) {
        // if (maxn < count[i]) maxn = count[i];
        // if (minn > count[i] && count[i] != 0) minn = count[i];
        maxn = max(maxn,count[i]),minn=count[i]==0?minn:min(minn,count[i]);
    }
    if (is_prime(maxn - minn))
        printf("Lucky Word\n%d", maxn - minn);
    else
        printf("No Answer\n0");
    return 0;
}