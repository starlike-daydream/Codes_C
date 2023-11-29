#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,arr[5][5],temp[5];//交换的行，初始矩阵，交换值中间值储存数组
    for(int i = 0;i< 5;i++){
        for(int j = 0;j<5;j++){//录入矩阵元素
            cin>>arr[i][j];
        }
    }
    cin>>a>>b;//录入交换的两行
    a--;//数组下标从零开始，所以减一
    b--;
    for (int i = 0; i < 5; i++){//让两行各个元素利用中间值做交换
        temp[i] = arr[a][i];
        arr[a][i] = arr[b][i];
        arr[b][i] = temp[i];
    }
    for(int i = 0;i < 5;i++){
        for(int j = 0;j < 5;j++){
            cout<<*(*(arr+i)+j)<<" ";//输出
        }
        cout<<endl;
    }
}