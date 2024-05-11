#include<bits/stdc++.h>
using namespace std;

int main() {
    int k, sum = 0;//总天数，总钱数
    cin >> k;
    for (int give = 1, day = 1;day <= k;give++)//初始化天数1，给的钱1，过完这些天再把给的钱+1，直到过完k天
        for (int i = give;i >= 1;i--) { //这些天钱一样,这里不能用day来终循环，因为它会变
            sum += give;//钱加进总计
            // cout<<i<<" "<<day<<" "<<give<<endl; //测试
            day++;//天数+1
            if (day > k) //防止内循环就到达k天，提前退出
                break;
                //这里可以找到答案直接退出程序
                //cout<<sum<<endl;
                //return 0;
        }
    cout << sum << endl;
    return 0;
}