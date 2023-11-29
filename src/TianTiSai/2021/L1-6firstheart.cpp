#include<bits/stdc++.h>
using namespace std;
int sum(int);
int main() {
    int n, num, heart;
    bool flag = 1;
    cin >> n;
    for (int i = 0;i < n;i++) {
        flag = 1;
        cin >> num;
        heart = sum(num);
        for (int j = 2;j <= 9;j++) {
            if (sum(num * j) != heart) {
                flag = 0;
                break;
            }
        }
        if (flag)
            cout << heart << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}
int sum(int n) {
    int sum = 0;
    while (n) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}