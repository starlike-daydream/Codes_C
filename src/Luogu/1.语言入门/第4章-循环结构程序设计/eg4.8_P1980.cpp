#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, x, count = 0, temp;
    cin >> n >> x;
    for (int i = 1;i <= n;i++) {
        temp = i;
        while (temp > 0) {
            if (temp % 10 == x)
                count++;
            temp /= 10;
        }
    }
    cout << count;
    return 0;
}