#include<bits/stdc++.h>
using namespace std;
int number[10], n, prize[10], guess, yes;
int main() {
    cin >> n;
    for (int i = 1;i <= 7;i++) {
        cin >> number[i];
    }
    while (n--) {
        yes = 0;
        for (int i = 1;i <= 7;i++) {
            cin >> guess;
            for (int j = 1; j <= 7; j++)
                if (guess == number[j])
                    yes++;
        }
        prize[yes]++;
    }
    for(int i = 7;i >= 1;i--)
        cout << prize[i] << ' ';
    return 0;
}