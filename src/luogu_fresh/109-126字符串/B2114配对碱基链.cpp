#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    for (int i = 0; i < s.size(); i++){
        if(s[i]=='A')
            cout<<'T';
        else if(s[i]=='T')
            cout<<'A';
        else if(s[i]=='C')
            cout<<'G';
        else if(s[i]=='G')
            cout<<'C';
    }
    return 0;
}