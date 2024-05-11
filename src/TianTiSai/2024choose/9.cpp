#include<bits/stdc++.h>
using namespace std;
string fall[130];
stack<char> box;
vector<char> ans;
/*
3 2 3 0  1 2 0
O P M -M G A -A
M A

3 2 3 0  1 2  0 2   2  0 -1
O P M -M G A -A T (-T) A -A 0
M A T A
*/
int main() {
    string s = "1";
    cout<<s[0]<<endl;
    s.erase(0, 1);s.empty()
    cout << s.size() << endl;
    int n, m, box_size, r;
    return 0;
    cin >> n >> box_size >> m;
    for (int i = 1;i <= n;i++) {
        cin >> fall[i];
    }
    while (1) {
        cin >> r;
        if (r == -1) break;
        else if (r == 0) {
            if (!box.empty()) {
                ans.push_back(box.top());
                box.pop();
            }
        }
        else {
            if (fall[r].size() != 0) {
                if (box.size() == box_size) {
                    ans.push_back(box.top());
                    box.pop();
                }
                box.push(fall[r][0]);
                fall[r].erase(0, 1);
            }
        }
    }
    for (int i = 0;i < ans.size();i++)
        cout << ans[i];
    return 0;
}