#include<bits/stdc++.h>
using namespace std;

int main() {
    s s, new_s = "", insert_s = "";//获取的字符串，要转化的字符串初始化为空，放6的字符串
    getline(cin, s);//整行字符串读入
    for (int i = 0;i < s.size();i++) {//遍历原来的字符串以获取它的所有字符
        if (s[i] == '6')//是6就放入放6的字符串中
            insert_s += '6';
        if (s[i] != '6' || (s[i] == '6' && i == s.size() - 1)) {//不是6或者是6是最后一个字符就转化
            if (insert_s.size() >= 1) {//看6字符串大小，不为空串才转化
                if (insert_s.size() > 9)//长度超过9就转化为27
                    new_s += "27";
                else if (insert_s.size() > 3)//长度超过3但不超过9就转化为9
                    new_s += '9';
                else
                    new_s += insert_s;//长度在3个以下的6就加回去
                insert_s = "";//重新计算6字符串
            }
        }
        if (s[i] != '6')//不是6就直接加回去
            new_s += s[i];
    }
    cout << new_s << endl;//输出新的字符串
    return 0;
}