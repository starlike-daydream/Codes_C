#include<bits/stdc++.h>
using namespace std;
int cube[25][25][25];

int main() {
    int q, count=0, x1, y1, z1, x2, y2, z2, w, x, h;
    cin >> w >> x >> h >> q;
    while (q--) {
        cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;
        for (int i = x1;i <= x2;i++)
            for (int j = y1;j <= y2;j++)
                for (int k = z1;k <= z2;k++)
                    cube[i][j][k] = 1;
    }
    for (int i = 1;i <= w;i++)
        for (int j = 1;j <= x;j++)
            for (int k = 1;k <= h;k++)
                if (cube[i][j][k] == 0)
                    count++;
    cout << count << endl;
    return 0;
}