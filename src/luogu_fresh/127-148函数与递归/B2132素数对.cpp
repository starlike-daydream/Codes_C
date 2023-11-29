#include <bits/stdc++.h>
using namespace std;
bool flag = 1,is_sushu(int);

int main(){
    int n;
    cin>>n;
    for (int i = 2; i <= n - 2; i++){
        if (is_sushu(i + 2) && is_sushu(i)){
            cout << i << ' ' << i + 2 << endl;
            flag = 0;
        }
    }
    if(flag)
        cout<<"empty"<<endl;
    return 0;
}

bool is_sushu(int n){
    for (int i = 2; i * i <= n + 1; i++){
        if (n % i == 0)
            return 0;
    }
    return 1;
}