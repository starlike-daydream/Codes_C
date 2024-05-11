#include<bits/stdc++.h>
using namespace std;
typedef struct {
    int h, m, s, ht, mt, st;
    string str;
}per;
bool cmp(const per &p1,const per &p2) {
    if (p1.h == p2.h)
        if (p1.m == p2.m) return p1.s < p2.s;
        else return p1.m < p2.m;
    else return p1.h < p2.h;
};
per t[10000];
int main() {
    int n;
    cin >> n;
    // getchar();
    for (int i = 1;i <= n;i++) {
        scanf("%02d:%02d:%02d - %02d:%02d:%02d", &t[i].h, &t[i].m, &t[i].s, &t[i].ht, &t[i].mt, &t[i].st);
        // getline(cin, t[i].str);
        // for(int j = 1;j <= t[i].str.size();j++) {
        //     cout<<j<<':'<<t[i].str[j]<<'\t';
        // }
        // cout<<endl;
        // t[i].h = stoi(t[i].str.substr(0, 2));
        // t[i].m = stoi(t[i].str.substr(3, 2));
        // t[i].s = stoi(t[i].str.substr(6, 2));
        // t[i].ht = stoi(t[i].str.substr(11, 2));
        // t[i].mt = stoi(t[i].str.substr(14, 2));
        // t[i].st = stoi(t[i].str.substr(17, 2));
        // cout << t[i].h << ' ' << t[i].m << ' ' << t[i].s << '\t' << t[i].ht << ' ' << t[i].mt << ' ' << t[i].st << endl;
    }
    sort(t + 1, t + n, cmp);
    if (t[1].h > 0 || t[1].m > 0 || t[1].s > 0)
        printf("00:00:00 - %02d:%02d:%02d\n", t[1].h, t[1].m, t[1].s);
    for (int i = 1;i <= n;i++)
        if (t[i].h > t[i - 1].ht || t[i].m > t[i - 1].mt || t[i].s > t[i - 1].st)
            printf("%02d:%02d:%02d - %02d:%02d:%02d\n", t[i - 1].ht, t[i - 1].mt, t[i - 1].st, t[i].h, t[i].m, t[i].s);
    if (t[n].ht < 23 || t[n].mt < 59 || t[n].st < 59)
        printf("%02d:%02d:%02d - 23:59:59", t[n].ht, t[n].mt, t[n].st);
    return 0;
}