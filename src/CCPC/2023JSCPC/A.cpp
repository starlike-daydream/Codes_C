#include<bits/stdc++.h>
using namespace std;

string next(string s) {
    for (int i = 0;i < s.size();i++)
        if (s[i] != 'z') s[i] += 1;
        else s[i] = 'a';
    return s;
}

int main() {
    int n, m;
    // int q = 1;
    // for (int i = 1;i <= 100;i++) {
    //     q *= 10, q %= 26;
    // }
    // cout << q << endl;return 0;
    // char ss[200];
    // sprintf(ss, "%.0f",1e100));
    // printf("%s\n%d\n",ss,strlen(ss));
    string s;
    cin >> n >> m >> s;
    // string sn = s;
    // int nn = n;
    // for (int i = 1;i <= 10;i++, nn *= 2) {
        // sn = sn.substr(0, nn / 2) + sn + next(sn.substr(nn / 2, nn / 2));
        // cout << sn << '\n';
        // cout << sn.substr(sn.size() - m, m) << '\n';
    // }
    // cout << "------------------\n";
    int i = 1;
    // double i = 1;
    while (n < m) {
        s = s.substr(0, n / 2) + s + next(s.substr(n / 2, n / 2));
        n *= 2;
        i++;
    }
    // cout << s << '\n';
    int n_2 = n / 2;
    for (;i <= 16;i++) {
        // n = s.size();
        string s_2 = s.substr(n_2, n_2);
        s = s_2 + next(s_2);
        // cout << s << endl;
        // cout << s.substr(s.size()-m,m) << endl;
    }
    cout << s.substr(n - m, m);
    return 0;
}