#include<bits/stdc++.h>
using namespace std;
int arr[105][105],add;//arr为根据题目要求创建矩阵A，add为矩阵B的元素

int main(){
    int n,m;//n和m，表示矩阵的行数和列数 
    cin>>n>>m;
    for (int i = 0; i < n; i++){//n行
        for (int j = 0; j < m; j++){//m列
            cin>>arr[i][j];//录入矩阵A的元素
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin>>add;//录入矩阵B的元素
            arr[i][j]+=add;//将其加到矩阵A中
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cout<<arr[i][j]<<" ";//根据题目要求输出相加结果（矩阵A）
        }
        cout<<endl;
    }  
}

//思路：创建矩阵A，将矩阵B的元素对应的加到矩阵