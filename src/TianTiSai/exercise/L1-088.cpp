#include<bits/stdc++.h>
using namespace std;
typedef struct {
    int score, pta;
}student;
student stu[100010];
// int flag[100010];
bool cmp(student stu1, student stu2) {
    return stu1.score == stu2.score ? stu1.pta < stu2.pta : stu1.score < stu2.score;
}
int main() {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int n, k, s, now, cnt = 0;
    cin >> n >> k >> s;
    // memset(flag, 0, sizeof flag);
    for (int i = 1;i <= n;i++)
        cin >> stu[i].score >> stu[i].pta;
    sort(stu, stu + n, cmp);
    cout << endl;
    for (int i = 1;i <= n;i++) {
        // cout << stu[i].score << ' ' << stu[i].pta << ' ' << flag[i] << endl;
    }
    cout << endl;
    while (k--) {
        for (int i = 1, now = 0;i <= n;i++) {
            // if(!flag[i])
            if ((stu[i].score > now || (stu[i].score == now && stu[i].pta >= s))) {
                if (stu[i].score >= 175) {
                    now = stu[i].score;
                    cout << k << ' ' << stu[i].score << ' ' << stu[i].pta << endl;
                    // flag[i] = 1;
                    stu[i].score = -1;
                    cnt++;
                }
            }
        }
    }
    cout << cnt << endl;
    return 0;
}