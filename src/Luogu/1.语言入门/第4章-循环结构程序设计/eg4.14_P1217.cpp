// #include<bits/stdc++.h>
// using namespace std;
// #define endl '\n'

// bool is_prime(int), is_palindrome(int);

// int main() {
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     int a, b;
//     cin >> a >> b;
//     for (int i = a;i <= b;i++)
//         if (is_palindrome(i) && is_prime(i))
//             cout << i << endl;
//     return 0;
// }

// bool is_prime(int n) {
//     for (int i = 2;i * i <= n;i++)
//         if (n % i == 0)
//             return 0;
//     return 1;
// }

// bool is_palindrome(int n) {
//     string s = to_string(n);
//     for (int i = 0; i < s.size() / 2; i++)
//         if (s[i] != s[s.size() - i - 1])
//             return 0;
//     return 1;
// }


#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
    int a, b, num;
    int i, j, k, l;
    bool flag;
    cin >> a >> b;
    //1-2位数
    if (a <= 5 && b >= 5)
        cout << 5 << endl;
    if (a <= 7 && b >= 7)
        cout << 7 << endl;
    if (a <= 11 && b >= 11)
        cout << 11 << endl;
    //三位数
    for (i = 1; i < 10; i += 2) {
        for (j = 0; j < 10; j++) {
            num = i * 100 + j * 10 + i, flag = 1;
            if (num < a) {
                continue;
            }
            else {
                if (num > b)
                    return 0;
            }
            for (k = 3;k *k<= num;k++) {
                if (num % k == 0) {
                    flag = 0;
                    break;
                }
            }
            if (flag)
                cout << num << endl;
        }
    }
    //五位数
    for (i = 1; i < 10; i += 2) {
        for (j = 0; j < 10; j++) {
            for (k = 0;k < 10;k++) {
                num = i * 10000 + j * 1000 + k * 100 + j * 10 + i, flag = 1;
                if (num < a) {
                    continue;
                }
                else {
                    if (num > b)
                        return 0;
                }
                for (int k = 3;k*k <= num;k++) {
                    if (num % k == 0) {
                        flag = 0;
                        break;
                    }
                }
                if (flag)
                    cout << num << endl;
            }
        }
    }
    //七位数
    for (i = 1; i <= 9; i += 2) {
        for (j = 0; j < 10; j++) {
            for (k = 0;k < 10;k++) {
                for (l = 0;l < 10;l++) {
                    num = i * 1000000 + j * 100000 + k * 10000 + l * 1000 + k * 100 + j * 10 + i, flag = 1;
                    if (num < a) {
                        continue;
                    }
                    else {
                        if (num > b)
                            return 0;
                    }
                    for (int k = 3;k*k <= num;k++) {
                        if (num % k == 0) {
                            flag = 0;
                            break;
                        }
                    }
                    if (flag)
                        cout << num << endl;
                }
            }
        }
    }
    return 0;
}