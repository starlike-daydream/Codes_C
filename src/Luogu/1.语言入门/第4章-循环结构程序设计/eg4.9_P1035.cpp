#include<bits/stdc++.h>
using namespace std;

int main() {
    int k,i=0;
    cin >> k;
    // double sn = 0;
    // for (i = 1;sn <= k;i++)
    //     sn += 1.0 / i;
    //i--;
    for (double sn = 0;sn <= k;i++, sn += 1.0 / i);
    cout<<i;
    return 0;
}