#include <bits/stdc++.h>
using namespace std;

int main()
{
    s s;
    getline(cin, s);
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'a')
            cout << 'z';
        else if (s[i] == 'A')
            cout << "Z";
        else if ((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122))
            cout << char(s[i] - 1);
        else
            cout << s[i];
    }
    return 0;
}