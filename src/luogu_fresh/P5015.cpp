#include<bits/stdc++.h>
using namespace std;

int main(){
    s s;
    int count = 0;
    getline(cin,s);
    for (int i = 0; i < s.size(); i++)
        if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')||(s[i]>='0'&&s[i]<='9'))
            count++;
    cout<<count<<endl;
    return 0;
}   