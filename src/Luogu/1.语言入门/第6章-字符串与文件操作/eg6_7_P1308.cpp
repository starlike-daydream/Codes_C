#include<iostream>
using namespace std;
void lower(string& s) {
    for (int i = 0;i < s.size();i++)
        if ('A' <= s[i] && s[i] <= 'Z') s[i] += 32;
}

int main() {
    string f, s, w = "";
    cin >> f;getchar();
    getline(cin, s);
    lower(f), lower(s);
    // cout<<s<<endl;
    int cnt = 0, first, flag = 1,i=0;
    for (;i < s.size();i++) {
        if (s[i] != ' ') {
            w += s[i];
            if (s[i + 1] == ' ') {
                // cout << w << ' ';
                if (w == f) cnt++;
                if (cnt == 1 && flag) first = i-f.size()+1, flag = 0;
                w = "";
            }
        }
    }
    if (f == s) cnt++;
    if (cnt == 1&&flag) first = i-f.size()+1;
    if (cnt == 0) cout << -1 << endl;
    else cout << cnt << ' ' << first << endl;
    return 0;
}
/*
BE
to be or not to be is a question
*/