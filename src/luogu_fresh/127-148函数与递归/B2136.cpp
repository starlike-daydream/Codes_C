#include<bits/stdc++.h>
using namespace std;
bool is_sushu(int),is_huiwen(int);

int main(){
    int n, count = 0;
    cin>>n;
    for (int i = 11; i <= n; i++)
        if(is_sushu(i)&&is_huiwen(i))
            count++;
    cout<<count<<endl;
    return 0;
}

bool is_sushu(int n){
    for (int i = 2; i*i <= n+1; i++)
        if(n % i == 0)
            return 0;
    return 1;
}

bool is_huiwen(int n){
    s s = to_string(n);
    for (int i = 0; i < s.size()/2; i++)
        if(s[i] != s[s.size()-i-1])
            return 0;
    return 1;
}