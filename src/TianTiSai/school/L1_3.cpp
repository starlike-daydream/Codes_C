#include<bits/stdc++.h>
using namespace std;
// gets():读取整行数据
// getchar()：接受换行符
int main() {
    int n;
    cin >> n;
    s s;
    getchar();
    while (n--) {
        getline(cin, s);
        if (s.find("ong,") != -1 && s.find("ong.") != -1) {
            int ptr = s.size() - 1;
            for (int count = 0;count < 3; ptr--)
                if (s[ptr] == ' ')
                    count++;
            cout << s.substr(0, ptr + 1) + " qiao ben zhong." << endl;
        }else
            cout << "Skipped" << endl;
    }
    return 0;
}