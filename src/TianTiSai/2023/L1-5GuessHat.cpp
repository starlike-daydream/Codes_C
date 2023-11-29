#include<bits/stdc++.h>
using namespace std;
int color_hat[105];
#define endl '\n'

int main() {
    int amount, k, color_guess;
    cin >> amount;
    for (int i = 0;i < amount;i++) {
        cin >> color_hat[i];
    }
    cin >> k;
    bool flag_right = 0, flag_false = 0;
    for (int i = 0;i < k;i++) {
        flag_right = 0, flag_false = 0;
        for (int j = 0;j < amount;j++) {
            cin >> color_guess;
            if (color_guess != 0 && color_guess != color_hat[j])
                flag_false = 1;
            if (color_hat[j] == color_guess)
                flag_right = 1;

        }
        if (!flag_false && flag_right)
            cout << "Da Jiang!!!"<<endl;
        else
            cout << "Ai Ya"<<endl;
    }
    return 0;
}