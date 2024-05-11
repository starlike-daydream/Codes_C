#include <bits/stdc++.h>
using namespace std;

int main(){
    s s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] -= 32;//'A'-'a'
        else if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 32;
    // cout << s << endl;
    for (int i = 0; i < s.size() / 2; i++){
        char temp = s[i];
        s[i] = s[s.length() - 1 - i];
        s[s.length() - 1 - i] = temp;
        }
    // cout << s << endl;
    for (int i = 0; i < s.size(); i++)
        switch (s[i]){
        case 'x': s[i] = 'a'; break;
        case 'y': s[i] = 'b'; break;
        case 'z': s[i] = 'c'; break;
        case 'X': s[i] = 'A'; break;
        case 'Y': s[i] = 'B'; break;
        case 'Z': s[i] = 'C'; break;
        default: s[i] += 3; break;
        }
    cout << s << endl;
    return 0;
}
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     string s;
//     cin >> s;
//     for (int i = 0; i < s.size(); i++)
//         if (s[i] >= 'a' && s[i] <= 'z')
//             s[i] -= 32;
//         else if (s[i] >= 'A' && s[i] <= 'Z')
//             s[i] += 32;
//     // cout << s << endl;
//     for (int i = 0; i < s.size() / 2; i++){
//         s[i] = s[i] ^ s[s.size() - i - 1];
//         s[s.size() - i - 1] = s[i] ^ s[s.size() - i - 1];
//         s[i] = s[i] ^ s[s.size() - i - 1];
//         }
//     // cout << s << endl;
//     for (int i = 0; i < s.size(); i++)
//         if (s[i] == 'x' || s[i] == 'X')
//             s[i] -= 'x' - 'a';//23
//         else if (s[i] == 'y' || s[i] == 'Y')
//             s[i] = 'y' - 'b';
//         else if (s[i] == 'z' || s[i] == 'Z')
//             s[i] = 'z' - 'c';
//         else
//             s[i] += 3;
//     cout << s << endl;
//     return 0;
// }