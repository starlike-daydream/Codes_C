#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5 + 10;
struct sent{
    vector<string> words;
    string s;
    bool operator <(const sent& u) const {
        return s < u.s;
    }
};
sent dic[N];

#define endl '\n'

signed main(){
    // ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int n, m;
    cin >> n;getchar();
    for (int i = 1;i <= n;i++) {
        string word="";
        getline(cin, dic[i].s);
        for(int j = 0;j < dic[i].s.size()-1;j++) {
            if (dic[i].s[j] == ' ' && dic[i].s[j+1]!=' ') {
                dic[i].words.push_back(word);
                word = "";
            }else word += dic[i].s[j];
        }
        word+=dic[i].s[dic[i].s.size()-1];
        dic[i].words.push_back(word);
        // for(auto &j:dic[i].words) cout<<j<<' ';cout<<'\n';
    }
    cin >> m;getchar();
    sort(dic + 1, dic + n + 1);
    while (m--) {
        vector<char> query;
        string s, ans = "";
        bool flag = 0;
        getline(cin, s);
        query.push_back(s[0]);
        for (int i = 0;i < s.size();i++)
            if (s[i - 1] == ' ') query.push_back(s[i]);
        for (int i = 1;i <= n;i++) {
            int cnt = 0;
            for (int j = 0;j < dic[i].words.size();j++)
                if (query[j] == dic[i].words[j][0]) cnt++;
                else break;
            if (cnt == query.size()) {
                flag = 1;
                ans += dic[i].s + '|';
            }
        }
        if (flag) {
            ans.erase(ans.size() - 1, 1);
            cout << ans;
        }
        else cout << s;
        cout << '\n';
    }
    return 0;
}