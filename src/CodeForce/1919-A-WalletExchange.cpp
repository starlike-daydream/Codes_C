#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
void my_swap(int& a, int& b);
int main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t, a, b, i;
    cin >> t;
    while (t--) {
        cin >> a >> b;
        for (i = 1;a > 0 || b > 0;i *= -1) {
            cout << a <<" "<< b << endl;
            if (a != 1) {
                swap(a, b);
            }
            if(i==1){
                a--;
            }else{
                b--;
            }
        }
        if (i == -1) {
            cout << "Alice" << endl;
        }
        else {
            cout << "Bob" << endl;
        }
    }

    // int a = 1, b = 2;
    // my_swap(a, b);
    // cout << a << " " << b << endl;
    return 0;
}

void my_swap(int& a, int& b) {
    int temp;
    temp = a, a = b, b = temp;
}