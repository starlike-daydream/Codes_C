#include<bits/stdc++.h>
using namespace std;
int m,n;
bool sushu(int);
int reverse(int);

int main(){
    cin>>m>>n;
    string s="";
    for(int i=m;i<=n;i++)
        if(sushu(i)&&sushu(reverse(i))){
            if(s!="")
                s+=",";
            s+=to_string(i);
        }
    if(s=="")
        cout<<"No";
    cout<<s;
    return 0;
}

bool sushu(int x){
    for(int i=2;i<=sqrt(x);i++)
        if(x%i==0)
            return 0;
    return 1;
} 

int reverse(int n){
    string s=to_string(n);
    reverse(s.begin(),s.end());
    return stoi(s);
}