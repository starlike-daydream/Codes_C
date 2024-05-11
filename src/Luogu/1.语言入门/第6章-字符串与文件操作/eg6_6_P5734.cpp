#include <iostream>
using namespace std;
int main() {
    int q, m, a, b, pos;
    string s, str;
    cin >> q >> s;
    while (q--) {
        cin >> m;
        switch (m) {
        case 1:
            cin >> str;
            s.append(str);
            cout << s << endl;
            break;
        case 2:
            cin >> a >> b;
            s = s.substr(a, b);
            cout << s << endl;
            break;
        case 3:
            cin >> a >> str;
            s.insert(a, str);
            cout << s << endl;
            break;
        case 4:
            cin >> str;
            if ((pos = s.find(str)) == -1)cout << -1 << endl;
            else cout << pos << endl;
        }
    }
    return 0;
}