#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;//
    cin >> s;
    for (int i = 0; i < s.size() - 1; i++)
        cout << (char)int(s[i] + s[i + 1]);
    cout << (char)int(s[s.length() - 1] + s[0]);
    return 0;
}