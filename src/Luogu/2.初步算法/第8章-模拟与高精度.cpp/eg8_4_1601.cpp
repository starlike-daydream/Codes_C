// #include<bits/stdc++.h>
// using namespace std;
// const int N = 1e3 + 10;
// #define endl '\n'
// short a[N], b[N], res[N];
// int main() {
//     ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//     string s1, s2;
//     cin >> s1 >> s2;
//     int len = max(s1.size(), s2.size());
//     for (int i = 1,j=s1.size()-1;i <= s1.size();i++,j--) a[i] = s1[j] - '0';
//     for (int i = 1,j=s2.size()-1;i <= s2.size();i++,j--) b[i] = s2[j] - '0';
//     for (int i = 1;i <= len;i++) {
//         res[i] += a[i] + b[i];
//         res[i + 1] = res[i] / 10;
//         res[i] %= 10;
//     }
//     //cout << "a:";for (int i = s1.size();i >= 1;i--) cout << a[i];cout << '\n'; // 打印验证
//     //cout << "b:";for (int i = s2.size();i >= 1;i--) cout << b[i];cout << '\n'; // 打印验证
//     if (res[len + 1]) len++;
//     for (int i = len;i >= 1;i--) cout << res[i];
//     return 0;
// }
#include<stdio.h>
#include <string.h>
const int N = 1e3 + 10;
short a[N], b[N], res[N];
char s1[N], s2[N];
int main() {
    scanf("%s\n%s", &s1, &s2);
    int len = strlen(s1) > strlen(s2) ? strlen(s1) : strlen(s2);
    for (int i = 1, j = strlen(s1) - 1;i <= strlen(s1);i++, j--) a[i] = s1[j] - '0';
    for (int i = 1, j = strlen(s2) - 1;i <= strlen(s2);i++, j--) b[i] = s2[j] - '0';
    for (int i = 1;i <= len;i++) {
        res[i] += a[i] + b[i];
        res[i + 1] = res[i] / 10;
        res[i] %= 10;
    }
    // printf("a:");for (int i = strlen(s1);i >= 1;i--) printf("%i",a[i]);putchar('\n'); // 打印验证
    // printf("b:");for (int i = strlen(s2);i >= 1;i--) printf("%i",b[i]);putchar('\n'); // 打印验证
    if (res[len + 1]) len++;
    for (int i = len;i >= 1;i--) printf("%i", res[i]);
    return 0;
}