#include <bits/stdc++.h>
using namespace std;

int main()
{
    double door;//用来判定出两条 DNA 序列是否相关的阈值
    s s1,s2;//两条DNA序列的字符串
    int similarity = 0;//计算两条DNA序列对应位置相同字符个数
    cin>>door>>s1>>s2;
    for (int i = 0; i < s1.length(); i++){//遍历DNA序列1
        if(s1[i] == s2[i])//如果DNA序列1的字符和DNA序列2的对应位置字符相等
            similarity++;//计次变量（两条DNA序列对应位置相同字符个数）加一
    }
    if(similarity * 1.0 / s1.length() >= door)//如果相似度（相同字符个数/字符串总长度）大于阈值
        cout<<"yes";
    else//如果相似度小于阈值
        cout<<"no";
    return 0; 
}

//思路：先获取两个字符串，再计算DNA序列相同位置碱基对中两个碱基相同个数，最后计算相同碱基对占DNA序列的比值与阈值进行比较