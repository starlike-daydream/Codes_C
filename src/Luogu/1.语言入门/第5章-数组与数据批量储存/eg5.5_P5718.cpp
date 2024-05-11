#include<iostream>
#include<cstdlib> //比cmath容错更好
using namespace std;
int score[1010][5];

int main() {
    int count = 0, n;
    cin >> n;
    for (int i = 1;i <= n;i++) {
        cin >> score[i][1] >> score[i][2] >> score[i][3];
        score[i][4] = score[i][1] + score[i][2] + score[i][3];
    }
    for (int i = 1;i < n;i++)
        for (int j = i + 1;j <= n;j++)
            if (abs(score[i][1] - score[j][1]) <= 5 && abs(score[i][2] - score[j][2]) <= 5 && abs(score[i][3] - score[j][3]) <= 5 && abs(score[i][4] - score[j][4]) <= 10)
                count++;
    cout << count << endl;
    return 0;
}