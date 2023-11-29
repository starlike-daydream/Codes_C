#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,num,count[105]={0};//定义输入数的个数，输入的数，计算出现的数出现次数的数组并初始化
    cin >> n;
    for (int i = 0; i < n; i++){
        cin>>num;
        count[num]++;//该数计数加一
        if(count[num] <= 1)//输出出现次数大于一的数
            cout<<num<<' ';
    }
    return 0;
}

//思路：去重本是个复杂工作，但是题目给了数的范围(题目说是10-100)并不大，于是想到了计次，计次小于等于1则输出即可