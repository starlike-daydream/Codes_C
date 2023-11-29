#include<bits/stdc++.h>
using namespace std;

int main(){
    //采药总时间T，草药数目M
    int T,M,value=0;
    //herb三个一维数组：采药时间，菜采药价值，价值时间比
    double herb[100][3];
    cin>>T>>M;
    for (int i = 0; i < M; i++)
    {
        cin>>herb[i][0]>>herb[i][1];
        herb[i][2] = herb[i][1] / herb[i][0];
    }
    //选择排序
    for (int i = 0; i < M - 1; i++){
        for (int j = i + 1; j < M; j++){
            if(herb[i][2] < herb[j][2]){
                for (int k = 0; k < 3; k++)
                {
                    double temp = herb[j][k];
                    herb[j][k] = herb[i][k];
                    herb[i][k] = temp;
                }
            }
        }
    }
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<herb[i][j]<<" ";
        }
        cout<<endl;
    }
    
    for (int i = 0; i < M; i++)
    {
        if(T - herb[i][0] >= 0){
            T -= herb[i][0];
            value += herb[i][1];
        }
    }
    cout<<value;
}