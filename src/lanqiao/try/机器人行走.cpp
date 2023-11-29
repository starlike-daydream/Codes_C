#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    char c;
    cin >> n;
    string s, walk;
    for (int i = 0;i < n;i++) {
        walk = "";
        int x = 0, y = 0, direct = 0;
        cin >> s;
        for (int j = 0;j < s.size();j++) {
            c = s[j];
            if (c >= '0' && c <= '9')
                walk += c;
            if (((c == 'L' || c == 'R') || j == s.size() - 1) && walk != "") {
                cout << walk << ' ' << direct << " ";
                if (direct == 90 || direct == -270)
                    y += stoi(walk);
                else if (direct == 0)
                    x += stoi(walk);
                else if (direct == 180 || direct == -180)
                    x -= stoi(walk);
                else if (direct == -90 || direct == 270)
                    y -= stoi(walk);
                walk = "";
            }
            if (c == 'L')
                direct += 90;
            else if (c == 'R')
                direct -= 90;
            if (direct == 360 || direct == -360)
                direct = 0;
        }
        cout << fixed << setprecision(2) << sqrt(x * x + y * y) << '\n';
    }
    return 0;
}