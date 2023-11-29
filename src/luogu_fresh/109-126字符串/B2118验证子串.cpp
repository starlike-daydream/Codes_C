#include <bits/stdc++.h>
using namespace std;

bool sub(string s1, string s2){//判断子串的方法
    int index = 0;//相同字符个数
    for (int i = 0; i < s2.size(); i++)
        if (s1[index] == s2[i]){
            index++;
            if (index == s1.size()){
                cout << s1 << " is substring of " << s2;
                return 1;
            }
        }else
            index = 0;
    return 0;
}

int main(){
    string s1, s2;
    cin >> s1 >> s2;
    bool flag1 = sub(s1, s2);//先判s1是不是s2的子串
    if(!flag1){//如果不是
        bool flag2 = sub(s2, s1);//再判s2是不是s1的子串
        if (!flag2)//都不是
            cout << "No substring";
    }
    return 0;
}
//一开始60分，忘记考虑吧相同的情况，然后80分，实在找不到问题，看看题解去
// 