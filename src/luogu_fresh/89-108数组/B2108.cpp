#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m],arrNew[n][m];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin>>arr[i][j];
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if(i == 0 || i == n - 1 || j == 0|| j == m - 1)
                arrNew[i][j] = arr[i][j];
            else
                arrNew[i][j] = (arr[i][j] + arr[i+1][j] + arr[i-1][j] + arr[i][j-1] + arr[i][j+1]) / 5.0;
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cout<<arrNew[i][j]<<" ";
        }
        cout<<endl;
    }  
}