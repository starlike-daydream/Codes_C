#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    char column, row;
    cin >> t;
    for (int i = 0;i < t;i++) {
        cin >> column >> row;
        for (char j = 'a';j <= 'h';j++)
            for (char k = '1';k <= '8';k++)
                if (!(j == column && k == row) && (j == column || k == row))
                    cout << j << k << endl;
    }
    return 0;
}