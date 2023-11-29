#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int length = 1;
    cin >> s;
    for (int i = 0; i < s.size() - 1; i++){
        if (s[i] == s[i + 1])
            length++;
        else{
            cout << length << s[i];
            length = 1;
        }
        if (i == s.size() - 2)
            cout << length << s[i + 1];
    }
    return 0;
}