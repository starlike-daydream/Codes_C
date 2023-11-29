#include<bits/stdc++.h>
using namespace std;

int main(){
    int m,n,sum = 0,num;
    cin>>m>>n;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin>>num;
            if(i == 0||i == n - 1||j == 0||j == m - 1)//边界元素
                sum += num;
        }
    }
    cout<<sum;
    return 0;
}