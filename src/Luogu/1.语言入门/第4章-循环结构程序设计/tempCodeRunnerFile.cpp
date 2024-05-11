#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, sum = 0, i = 0;
    cin >> n;
    n *= 10;
    while (--n) sum += ++i;
    cout<<sum/10.0;
    return 0;
}