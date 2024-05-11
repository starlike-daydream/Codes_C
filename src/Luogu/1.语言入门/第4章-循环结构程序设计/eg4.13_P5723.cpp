#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
    int ans = 0, L, load = 0;
    cin >> L;
    for (int i = 2;;i++) {
        bool is_prime = 1;
        for (int j = 2;j * j <= i;j++)
            if (i % j == 0) {
                is_prime = 0;
                break;
            }
        if (!is_prime)
            continue;
        if (i + load > L)
            break;
        cout << i << endl;
        ans++;
        load += i;
    }
    cout << ans << endl;
}
// bool is_prime(int);
// int main() {
//     int l, count = 0, sum = 0;
//     cin >> l;
//     for (int i = 2;;i++)
//         if (is_prime(i)) {
//             sum += i;
//             if (sum > l)
//                 break;
//             count++;
//             cout << i << endl;
//         }
//     cout << count << endl;
//     return 0;
// }

// bool is_prime(int n) {
//     for (int i = 2;i*i <= n;i++)
//         if (n % i == 0)
//             return 0;
//     return 1;
// }