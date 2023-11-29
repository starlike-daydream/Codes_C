#include<bits/stdc++.h>
using namespace std;
int m,n,k,arr1[105][105],arr2[105][105],ans[105][105];

int main(){
    cin>>n>>m>>k;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin>>arr1[i][j];
        }
    }
    for (int i = 0; i < m; i++){
        for (int j = 0; j < k; j++){
            cin>>arr2[i][j];
        }
    }
    for (int i = 0; i < n; i++){//结果每行
        for (int j = 0; j < k; j++){//结果每列
            for (int l = 0; l < m; l++){//每个元素为矩阵1对应行乘以矩阵2对应列元素
                ans[i][j] += arr1[i][l] * arr2[l][j];
            }   
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < k; j++){
            cout<<ans[i][j]<<' ';
        }
        cout<<endl;
    }
    return 0;
}