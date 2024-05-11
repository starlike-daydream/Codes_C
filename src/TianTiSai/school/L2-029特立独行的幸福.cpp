#include<bits/stdc++.h>
using namespace std;
int square_sum(int), lucky_indep_num(int);
bool is_prime(int), is_independence(int);
int a, b, cnt = 0;

int main() {
    cin >> a >> b;
    for (int i = a;i <= b;i++) {
        int lucky_indep = lucky_indep_num(i);
        if (lucky_indep && is_independence(i)) {
            cnt++;
            cout << i << ' ';
            cout << (is_prime(i) ? lucky_indep * 2 : lucky_indep) << endl;
        }
    }
    if (cnt == 0)
        cout << "SAD" << endl;
    return 0;
}
int lucky_indep_num(int n) {
    vector<int> v;
    int indep_num = 0;
    while (n != 1) {
        for (int i = 0; i < v.size(); i++)
            if (v[i] == n)
                return 0;
        v.push_back(n);
        n = square_sum(n);
        indep_num++;
    }
    return indep_num;
}
int square_sum(int n) {
    int sum = 0;
    while (n) {
        int mod = n % 10;
        sum += mod * mod;
        n /= 10;
    }
    return sum;
}
bool is_prime(int n) {
    if (n < 2)
        return 0;
    for (int i = 2;i * i <= n;i++)
        if (n % i == 0)
            return 0;
    return 1;
}
bool is_independence(int n) {
    for (int i = a;i <= b;i++)
        if (square_sum(i) == n)
            return 0;
    return 1;
}