#include<bits/stdc++.h>
using namespace std;
typedef struct {
    string id;
    int score;
}team;
team teams[1005];

int main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n, num, idx = 0;
    string s, t_id;
    bool flag;
    cin >> n;
    for (int i = 0;i < n;i++) {
        cin >> s >> num;
        t_id = "", flag = 1;
        for (int j = 0;j < s.size();j++) {
            if (s[j] >= '0' && s[j] <= '9') {
                t_id += s[j];
            }
            else
                break;
        }
        for (int j = 0;j < idx;j++) {
            if (t_id == teams[j].id) {
                flag = 0;
            }
        }
        if (flag) {
            teams[idx].id = t_id;
            idx++;
        }
        for (int j = 0;j < idx;j++) {
            if (t_id == teams[j].id) {
                teams[j].score += num;
            }
        }
    }
    for (int i = 0;i < idx-1;i++) {
        for (int j = i + 1;j < idx;j++) {
            if(teams[i].score<teams[j].score){
                int temp1=teams[i].score;
                string temp2=teams[i].id;
                teams[i].score=teams[j].score;
                teams[i].id=teams[j].id;
                teams[j].score=temp1;
                teams[j].id=temp2;
            }
        }
    }
    cout << teams[0].id << " " << teams[0].score << endl;
    return 0;
}