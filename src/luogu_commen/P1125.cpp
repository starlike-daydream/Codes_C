#include<bits/stdc++.h>
using namespace std;
int cnt[30];
bool is_prime(int);

int main() {
    int maxn = 0, minn = 1001;
    s s;
    cin >> s;
    for (int i = 0;i < s.size();i++)
        cnt[s[i] - 'a']++;
    for (int i = 0;i < 26;i++)
        if (cnt[i] != 0) {
            if (cnt[i] > maxn)
                maxn = cnt[i];
            if (cnt[i] < minn)
                minn = cnt[i];
        }
    if (is_prime(maxn - minn)) {
        cout << "Lucky Word" << endl;
        cout << maxn - minn << endl;
    }
    else {
        cout << "No Answer" << endl;
        cout << 0 << endl;
    }
    return 0;
}

bool is_prime(int n) {
    if (n < 2)
        return 0;
    for (int i = 2;i * i <= n;i++)
        if (n % i == 0)
            return 0;
    return 1;
}