#include<bits/stdc++.h>
using namespace std;
bool is_sushu(int);

int main(){
    int x , y, count = 0;
    cin>>x>>y;
    for (int i = x>y?y:x; i <= (x>y?x:y); i++)
        if(is_sushu(i))
            count++;
    cout<<count<<endl;
    return 0;
}

bool is_sushu(int n){
    if(n == 1) return 0; 
    for (int i = 2; i * i <= n+1; i++)
        if(n % i == 0)
            return 0;
    return 1;
}