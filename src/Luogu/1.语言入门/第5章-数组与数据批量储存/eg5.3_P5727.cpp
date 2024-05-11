#include<bits/stdc++.h>
using namespace std;

int main() {
    int num, change[10010], n = 1;
    cin >> num;
    change[0] = num;
    while (num != 1) {
        if (num % 2 != 0)
            num = num * 3 + 1;
        else
            num /= 2;
        change[n++] = num;
    }
    while (n--)
        cout << change[n] << ' ';
    return 0;
}