#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int count=0;
    getline(cin,s);
    for(int i = 0;i < s.length();i++){
        if(s[i] >= '0' && s[i] <= '9'){
            count++;
        }
    }
    cout<<count;
    return 0;
}