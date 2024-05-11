#include<bits/stdc++.h>
using namespace std;

int main() {
    // ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    // string s;
    // cin >> s;
    // for (int i = 0;i < s.size();i++)
        // if (s[i] >= 97 && s[i] <= 122)
            // s[i] -= 32;
    // cout << s;
    // char s[100];
    // scanf("%s", &s);
    // for (int i = 0;s[i]!='\0';i++)
    //     if (s[i] >= 'a' && s[i] <= 'z')
    //         s[i] -= 'a'-'A';
    // printf("%s", s);
    while (1) {
        char c=getchar();
        if (c == EOF) break;//getchar读到文件末尾就会返回EOF，终端运行就要 Ctrl + Z
        if ('a' <= c && c <= 'z') c -= 'a' - 'A';
        putchar(c);
    }
    return 0;
}