#include <bits/stdc++.h>
using namespace std;

int main()
{
    s s_max, s_min, s;
    int max = 0, min = 100, index = 0, length = 0;
    getline(cin, s);
    for (int i = 0; i < s.length(); i++){
        length++;
        if (s[i] == ' ' || s[i] == '.' || s[i] == ','){
            length--;
            if (max < length){
                max = length;
                s_max = s.substr(index, length);
            }
            if (min > length){
                min = length;
                s_min = s.substr(index, length);
            }
            length = 0;
            index = i+1;
        }
    }
    cout<<s_max<<endl<<s_min;
}