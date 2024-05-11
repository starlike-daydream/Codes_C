#include<bits/stdc++.h>
using namespace std;
string s[7];
int main() {
    int num;
    char c;
    cin >> num;
    while (num--) {
        cin >> c;
        if (c == '0') {
            s[1] += "XXX";
            s[2] += "X.X";
            s[3] += "X.X";
            s[4] += "X.X";
            s[5] += "XXX";
        }else if (c == '1') {
            s[1] += "..X";
            s[2] += "..X";
            s[3] += "..X";
            s[4] += "..X";
            s[5] += "..X";
        }else if (c == '2') {
            s[1] += "XXX";
            s[2] += "..X";
            s[3] += "XXX";
            s[4] += "X..";
            s[5] += "XXX";
        }else if (c == '3') {
            s[1] += "XXX";
            s[2] += "..X";
            s[3] += "XXX";
            s[4] += "..X";
            s[5] += "XXX";
        }else if (c == '4') {
            s[1] += "X.X";
            s[2] += "X.X";
            s[3] += "XXX";
            s[4] += "..X";
            s[5] += "..X";
        }else if (c == '5') {
            s[1] += "XXX";
            s[2] += "X..";
            s[3] += "XXX";
            s[4] += "..X";
            s[5] += "XXX";
        }else if (c == '6') {
            s[1] += "XXX";
            s[2] += "X..";
            s[3] += "XXX";
            s[4] += "X.X";
            s[5] += "XXX";
        }else if (c == '7') {
            s[1] += "XXX";
            s[2] += "..X";
            s[3] += "..X";
            s[4] += "..X";
            s[5] += "..X";
        }else if (c == '8') {
            s[1] += "XXX";
            s[2] += "X.X";
            s[3] += "XXX";
            s[4] += "X.X";
            s[5] += "XXX";
        }else if (c == '9') {
            s[1] += "XXX";
            s[2] += "X.X";
            s[3] += "XXX";
            s[4] += "..X";
            s[5] += "XXX";
        }if (num != 0)
            for (int i = 1;i <= 5;i++)
                s[i] += '.';
    }
    for (int i = 1;i <= 5;i++)
        cout << s[i] << '\n';
    return 0;
}