#include<bits/stdc++.h>
using namespace std;
int main() {
    int L;
    cin >> L;
    for (int i = 1;i <= L;i++) {
        cout << "Today,I ate " << i << " apple";
        if (i > 1)
            cout << "s";
        cout << "." << endl;
    }
    return 0;
}