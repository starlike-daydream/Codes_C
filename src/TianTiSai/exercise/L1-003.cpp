#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    map<char, int> map;
    for (char c: s) 
        // if (map.find(c) != map.end())
        //     map[c] = 1;
        // else
            map[c]++;
    for(char c = '0';c <= '9';c++) 
        if (map.find(c) != map.end())
            cout<<c<<":"<<map[c]<<endl;
    return 0;
}