#include<bits/stdc++.h>
using namespace std;
string s, ss[510], sum="";

int main(){
    int idx =0;
    while (true){
        bool flag = 1;
        getline(cin, s);
        if(s == "0")
            break;
        // cout<<s;
        ss[idx]=s;
        for (int i = 0; i < idx; i++)
            if(ss[i] == s){
                flag = 0;
                break;
            }
        if(flag)
            sum+=s;
        idx += 1;
    }
    cout << sum;
    return 0;
}