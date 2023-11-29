#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    for (int i = 0; i < n; i++){
        cin >> s;
        if (s[0] >= 97 && s[0] <= 122)
            s[0] -= 32;
        for (int i = 1; i < s.size(); i++)
            if (s[i] >= 65 && s[i] <= 90)
                s[i] += 32;
        cout << s << endl;
    }
    return 0;
}
