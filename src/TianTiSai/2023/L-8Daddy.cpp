#include<bits/stdc++.h>
using namespace std;
int sum(int);

int main() {
    int n, a, b;
    cin >> n;
    for (int i = 0;i < n;i++) {
        cin >> a >> b;
        if (a % sum(b) == 0 && b % sum(a) == 0)
            if (a > b)
                cout << "A" << endl;
            else
                cout << "B" << endl;
        else if (a % sum(b) == 0)
            cout << "A" << endl;
        else if (b % sum(a) == 0)
            cout << "B" << endl;
        else
            if (a > b)
                cout << "A" << endl;
            else
                cout << "B" << endl;
    }
    return 0;
}
int sum(int n) {
    int s = 0;
    while (n) {
        s += n % 10;
        n /= 10;
    }
    return s;
}