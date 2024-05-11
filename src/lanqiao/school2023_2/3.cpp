// #include<bits/stdc++.h>
// using namespace std;
// #define endl '\n'
// #define ll long long

// ll to_bin(int);
// ll to_oct(int);
// int num_sum(ll);

// int main() {
//     int index = 0;
//     for (int i = 1;;i++) {
//         if (num_sum(to_bin(i)) == num_sum(to_oct(i))) {
//             index++;
//             // cout << index<<":"<<i << endl;
//         }
//         if (index == 23) {
//             // cout << index << ":" << i << endl;
//             cout << i << endl;
//             break;
//         }

//     }
//     return 0;
// }
// ll to_bin(int n) {
//     string s = "";
//     while (n) {
//         s = to_string(n % 2) + s;
//         n /= 2;
//     }
//     ll res = stoll(s); //一开始用int接收了
//     return res;
// }
// ll to_oct(int n) {
//     string s = "";
//     while (n) {
//         s = to_string(n % 8) + s;
//         n /= 8;
//     }
//     ll res = stoll(s);
//     return res;
// }
// int num_sum(ll n) {
//     int sum = 0;
//     while (n) {
//         sum += n % 10;
//         n /= 10;
//     }
//     return sum;
// }

/*
问题描述
　　如果一个正整数转化成二进制与转换成八进制后所有数位的数字之和相等，则称为数位和相等的数。
　　前几个数位和相等的正整数为 1, 8, 9, 64, ……
　　请问第 23 个数位和相等的正整数是多少？
答案提交
　　这是一道结果填空的题，你只需要算出结果后提交即可。本题的结果为一个整数，在提交答案时只填写这个整数，填写多余的内容将无法得分。
*/

#include<bits/stdc++.h>
using namespace std;

int sum_2(int);
int sum_8(int);

int main() {
    int index = 0, i;
    for (i = 1;index < 23;i++)
        if (sum_2(i) == sum_8(i))
            index++;
    cout << --i << endl;
    return 0;
}
int sum_2(int n) {
    int sum = 0;
    while (n) {
        sum += n % 2;
        n /= 2;
    }
    return sum;
}
int sum_8(int n) {
    int sum = 0;
    while (n) {
        sum += n % 8;
        n /= 8;
    }
    return sum;
}

