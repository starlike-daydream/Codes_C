// #include <bits/stdc++.h>
// using namespace std;
// string trim(string s){
//     while(s[s.size()-1]==' ')
//         s=s.erase(s.size()-1);
    
//     while(s[0]==' ')
//         s=s.erase(0);    
//     return s;
// }

// bool sub(string s1, string s2){//判断子串的方法
//     int index = 0;//相同字符个数
//     for (int i = 0; i < s2.length(); i++)
//         if (s1[index] == s2[i]){
//             // cout<<index<<" "<<s1[index]<<" "<<i<<" "<<s2[i]<<endl;
//             index++;
//             // cout<<index<<" "<<s1.length()<<endl;
//             if (index == s1.length()){
//                 cout << s1 << " is substring of " << s2;
//                 return 1;
//             }
//         }else
//             index = 0;
//     return 0;
// }

// int main(){
//     // string s = "hellp"; 
// // nijhellpsad";
//     string s1, s2;
//     getline(cin,s1);
//     getline(cin,s2);
//     // cout<<s1.length()<<endl;
//     // cout<<s2.length()<<endl;
//     // return 0;
//     s1=trim(s1);
//     s2=trim(s2);
//     bool flag1 = sub(s1, s2);//先判s1是不是s2的子串
//     if(!flag1){//如果不是
//         bool flag2 = sub(s2, s1);//再判s2是不是s1的子串
//         if (!flag2)//都不是
//             cout << "No substring";
//     }
//     return 0;
// }
// //一开始60分，忘记考虑吧相同的情况，然后80分，实在找不到问题，看看题解去
// // 
#include<bits/stdc++.h>
using namespace std;

int main(){
    s s1,s2;
    cin>>s1>>s2;
    // if(s1.find(s2)!=-1)
    if(s1.find(s2)!=-1)
        cout<<s1 << " is substring of " << s2;
    else if(s2.find(s1)!=-1)
        cout<<s2 << " is substring of " << s1;
    else
        cout<<"No substring"<<endl;
    return 0;
}