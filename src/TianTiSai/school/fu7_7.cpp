#include<bits/stdc++.h>

using namespace std;
s ss[105];

int main() {
    char fu;//替换字符
    int n;//字符串行数
    s s, news, s1;//吞行字符串，倒过来后新字符串，旧字符串
    cin >> fu >> n;
    getline(cin, s);//吞行
    for (int i = 0; i < n; i++) {
        getline(cin, ss[i]);//获取整行字符串
        for (int j = 0; j < int(ss[i].size()); j++)//遍历字符串，替换字符
            if (ss[i][j] == '@')
                ss[i][j] = fu;
        s1 += ss[i] + '\n';//拼接原字符串
        reverse(ss[i].begin(), ss[i].end());//反转字符串
    }
    for (int i = n - 1; i >= 0; i--)//倒序拼接反转字符串，完成180度旋转
        news += ss[i] + '\n';//拼接倒字符串
    if (s1 == news)//如果原字符串和新字符串相等
        cout << "bu yong dao le" << '\n';
    cout << news;//输出180度旋转字符串
}

