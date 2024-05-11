#include <bits/stdc++.h>
using namespace std;
int flag[30];//计算a-z（对应位置0-25）字符出现次数

int main(){
    s s;//要进行查找的字符串
    cin >> s;
    for (int i = 0; i < s.length(); i++){//遍历字符串
        flag[(s[i] - 'a')]++;//该字符减去字符a的ASCII码得到结果0-25对应a-z26个字母，为其计数加一
    }
    for (int i = 0; i < s.length(); i++){//遍历字符串
        if (flag[s[i] - 'a'] == 1){//如果该字符出现次数计数为1
            cout << s[i];//输出这个数
            return 0;//结束程序
        }
    }
    cout << "no";//如果没有字符出现次数为1，才会程序运行到这里，输出no
    return 0;
}

//思路：可以先计算给的字符串各个字幕出现次数，之后再次遍历字符串找到第一个出现次数为1的元素进行输出