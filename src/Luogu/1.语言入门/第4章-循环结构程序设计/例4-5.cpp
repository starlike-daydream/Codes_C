#include<bits/stdc++.h>
using namespace std;

int main() {
    int guess, ans;
    srand(time(0));
    cout << "请输入您猜的数字，随机数的范围是1-100" << endl;
    ans = rand() % 100 + 1;
    do {
        cin >> guess;
        if (guess > ans)
            cout << "Too Large!" << endl;
        else if (guess < ans)
            cout << "Too Small!" << endl;
    } while (guess != ans);
    cout << "You are right！" << endl;
    return 0;
}