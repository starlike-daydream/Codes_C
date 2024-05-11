#include<bits/stdc++.h>
using namespace std;

int main() {
    int mood, clock;
    map<int, int> map;
    for (int i = 0;i < 24;i++) {
        cin >> mood;
        map[i] = mood;
    }
    // for(int i = 1;i <= 24;i++) {
    //     cout << map[i]<<' ';
    // }
    while (1) {
        cin >> clock;
        if (clock < 0 || clock>23)
            break;
        cout << map[clock]<<(map[clock] << map[clock] > 50 ? " Yes" : " No") << endl;
    }
    return 0;
}