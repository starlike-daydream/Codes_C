#include <bits/stdc++.h>
using namespace std;
bool huiwen(string), AB(string), flag1 = 1, flag2 = 1;
int maxday(int, int);

int main(){
    string s, s1, s2;
    cin >> s;
    int year = stoi(s.substr(0, 4));//!
    int month = stoi(s.substr(4,2));
    int day = stoi(s.substr(6,2));
    while (1){
        // s = to_string(year);
        // if(month<10)
        //     s+='0';
        // s+=to_string(month);
        // if(day<10)
        //     s+='0';
        // s+=to_string(day);
        day++;
        if (day == maxday(year, month) + 1){//!
            day = 1, month++;
            if (month == 13)//!
                month = 1, year++;
        }
        s = to_string(year * 10000 + month * 100 + day);//!
        // cout<<s<<endl;
        if (flag1 && huiwen(s)){
            s1 = s;
            flag1 = 0;
        }
        if (flag2 && AB(s)){
            s2 = s;
            flag2 = 0;
        }
        if (!(flag1 || flag2))
            break;
    }
    cout << s1 << endl<< s2;
    return 0;
}

bool huiwen(string s)
{
    for (int i = 0; i < s.size(); i++)
        // cout<<s[i]<<' '<<s[s.size()-i-1]<<endl;
        if (s[i] != s[7 - i])//!
            return 0;
    return 1;
}

bool AB(string s){
    if (s[0] == s[2] && s[2] == s[5] && s[5] == s[7] &&
        s[1] == s[3] && s[3] == s[4] && s[4] == s[6])
        return 1;
    return 0;
}

int maxday(int year, int month){
    if (month == 2)
        if (year % 400 == 0 || year % 100 != 0 && year % 4 == 0)
            return 30;
        else
            return 29;
    if (month <= 7)         // 1-7
        if (month % 2 == 0) // 4,6
            return 30;
        else // 1,3,5,7
            return 31;
    else                    // 8-12
        if (month % 2 == 0) // 8,10,12
            return 31;
        else // 9,11
            return 30;
}