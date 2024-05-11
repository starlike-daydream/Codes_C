// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     string s, rev = "";//接受的字符串，单个单词
//     getline(cin, s);
//     for (int i = 0; i < s.size(); i++){//遍历所有字符
//         if (s[i] != ' ')//不是空格就加到单词字符串里
//             rev += s[i];
//         else{//遇到空格就倒序输出这个字符串，并且字符串赋为空值
//             for (int i  = rev.size() - 1; i >= 0; i--)
//                 cout << rev[i];
//             cout << endl;
//             rev = "";
//         }
//         if (i == s.size() - 1)//特判最后一个单词，他没有空格的结束标志
//             for (int i = rev.size() - 1; i >= 0; i--)
//                 cout << rev[i];
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// typedef long long ll;
// typedef unsigned long long ull;
// typedef pair<int,int> pii;
// const int N = 2e6 + 5;
// const int M = 1005;
// const int mod = 20123;

// ll T = 1, n, m, temp, temp1;
// string s, s1;

// void solve() {
// 	while (cin >> s) {
// 		for (int i = s.size() - 1; i >= 0; i--) cout<<s[i];
// 		cout << '\n';
// 	}
// 	return ;
// }

// int main() {
// 	ios::sync_with_stdio(0);
// //	cin.tie(0);
// //	cout.tie(0);

// //	cin >> T;
// 	while (T--) solve();
// 	return 0;
// } 
#include<bits/stdc++.h>
using namespace std;

int main() {
    s s;
    while (cin >> s) {
        reverse(s.begin(), s.end());
        cout<<s<<endl;
    }
    return 0;
}