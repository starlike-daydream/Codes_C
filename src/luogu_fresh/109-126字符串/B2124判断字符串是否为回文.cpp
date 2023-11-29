#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    for (int i = 0; i < s.size()/2; i++)
        if(s[i] != s[s.size()-i-1]){
            cout<<"no";
            return 0;
        }
    cout<<"yes";
    return 0;
}