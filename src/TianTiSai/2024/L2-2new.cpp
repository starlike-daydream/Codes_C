#include<bits/stdc++.h>
using namespace std;
map<string, vector<string>> dic;

int main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n, m;
    string s;
    cin >> n;getline(cin, s);
    for (int i = 1;i <= n;i++) {
        getline(cin, s);
        string cap = "";
        if (s[0] != ' ')cap = s[0];
        for (int j = 1;j < s.size();j++)
            if (s[j - 1] == ' ' && s[j] != ' ') cap += s[j];
        dic[cap].push_back(s);
        // for (auto &j : dic[cap]) cout<< j << '|';cout<<'\n';
    }
    cin >> m;getline(cin, s);
    for (auto& i : dic) sort(i.second.begin(), i.second.end());
    while (m--) {
        getline(cin, s);
        string query = "";
        if (s[0] != ' ') query = s[0];
        cout << s[-1] << '\n';
        for (int j = 1;j < s.size();j++)
            if (s[j - 1] == ' ' && s[j] != ' ') query += s[j];
        if (dic.count(query) == 1) {
            string ans = "";
            for (auto& i : dic[query]) ans += i + '|';
            cout << ans.substr(0, ans.size() - 1) << '\n';
        }
        else cout << s << '\n';
    }
    return 0;
}