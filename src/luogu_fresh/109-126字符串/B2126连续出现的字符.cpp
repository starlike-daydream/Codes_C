#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int k, count = 1;
    cin >> k >> s;
    char c = s[0];
    for (int i = 1; i < s.size(); i++){
        if (c == s[i]){
            count++;
            // cout<<count;
            if (count >= k){
                cout << s[i];
                return 0;
            }
        }
        else
            count = 1;
        c = s[i];
    }
    cout << "No";
    return 0;
}