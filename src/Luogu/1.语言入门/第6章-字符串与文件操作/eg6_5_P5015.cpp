#include<iostream>
using namespace std;

int main() {
    int cnt;
    string s;
    while (cin >> s)
        for (int i = 0;i < s.size();i++)
            if ((s[i] >= 48 && s[i] <= 57) || (s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122))
                cnt++;
    cout<<cnt<<'\n';
    return 0;
}