#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, sum = 0, i = 0;
    cin >> n;
    // for(int i = 1;i <= n;i++)
    //     sum+=i;
    while (n--) sum += ++i;//自增自减可以用在while或for的循环表达式中
    cout << sum << endl;
    return 0;
    
}