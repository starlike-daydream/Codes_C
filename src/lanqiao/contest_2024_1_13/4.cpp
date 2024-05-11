#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int a, b, c, d, t, aa, bb;//小蓝体力，小桥体力，小桥攻击力，小蓝攻击力
    cin >> t;
    while (t--) {
        cin >> a >> b >> c;
        int qiao_cnt;
        qiao_cnt = ceil(a * 1.0 / c);
        int min_d = ceil(b * 1.0 / qiao_cnt);
        cout << min_d << endl;
        // for (d = 1;;d++) {
        //     aa = a, bb = b;
            // while (1) {
            //     bb -= d;
            //     if (bb <= 0)break;
            //     aa -= c;
            //     if (aa <= 0)break;
            // }
            // if (aa > 0) {
            //     cout << d << endl;
            //     break;
            // }
        // }
    }
    return 0;
}