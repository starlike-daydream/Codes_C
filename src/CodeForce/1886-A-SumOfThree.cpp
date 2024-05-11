// #include<bits/stdc++.h>
// using namespace std;
// #define endl '\n'
// #define N 30000050

// int arr[N], i, j, k, t, num, x, y, z, n;
// bool flag = 1;

// int main() {
//     ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//     cin >> t;
//     while (n++ <= N)
//         if (n % 3)
//             arr[i++] = n;
//     while (t--) {
//         flag = 1, i = 0;
//         cin >> num;
//         for (x = arr[i++];x < num && flag;x = arr[i++])
//             for (j = i, y = arr[j++];y < num && flag;y = arr[j++])
//                 for (k = j, z = arr[k++];z < num && flag;z = arr[k++])
//                     // cout << i << ' ' << x << ' ' << y << ' ' << z << endl;
//                     if (x + y + z == num) {
//                         flag = 0;
//                         cout << "YES" << endl << x << ' ' << y << ' ' << z << endl;
//                     }
//         if (flag)
//             cout << "NO" << endl;
//     }
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int t, num, x, y, z, n;
bool flag = 1;

int main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> t;
    while (t--) {
        flag = 1;
        cin >> num;
        for (x = 1;x < num && flag;x++) {
            if (x % 3 == 0)
                continue;
            for (y = x+1;y < num && flag;y++) {
                if (y % 3 == 0)
                    continue;
                for (z = y+1;z < num && flag;z++) {
                    if (z % 3 == 0)
                        continue;
                    // cout << i << ' ' << x << ' ' << y << ' ' << z << endl;
                    if (x + y + z == num) {
                        flag = 0;
                        cout << "YES" << endl << x << ' ' << y << ' ' << z << endl;
                    }
                }
            }
        }
        if (flag)
            cout << "NO" << endl;
    }
    return 0;
}