#include <bits/stdc++.h>
using namespace std;
int m, n;
bool zhishu(int);

int main(){
    cin >> m >> n;
    for (int i = m; i <= n; i++)
        for (int j = i; j >= 2; j--)
            if (zhishu(j) && i % j == 0){
                cout << j << (i == n ? " " : ",");
                break;
                }
    return 0;
}

bool zhishu(int n){
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return 0;
    return 1;
}