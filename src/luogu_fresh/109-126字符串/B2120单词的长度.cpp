#include <bits/stdc++.h>
using namespace std;

int main(){
    s s;
    getline(cin,s);
    for (int i = 0, length = 0; i < s.size(); i++)
        if(i == s.size() - 1)
            cout<<length + 1;
        else if (s[i] != ' ')
            length++;
        else{
            cout << length << ",";
            length = 0;
        }
    return 0;
}