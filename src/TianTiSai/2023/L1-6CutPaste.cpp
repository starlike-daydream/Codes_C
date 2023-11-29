#include<bits/stdc++.h>
using namespace std;

int main() {
    string s, cut, front, back;
    int n, a, b, index;
    cin >> s >> n;
    for (int i = 0;i < n;i++) {
        cin >> a >> b >> front >> back;
        a--;
        cut = s.substr(a, b - a);
        // cout<<cut<<endl;
        s = s.substr(0, a) + s.substr(b, s.size() + 1);
        // cout<<s<<endl;
        index = s.find(front + back);
        // cout<<index_f<<" "<<index_b<<endl;
        if (index != int(string::npos))
            s.insert(index + front.size(), cut);
        else
            s.append(cut);
        // cout<<s<<endl;
    }
    cout << s;
    return 0;
}