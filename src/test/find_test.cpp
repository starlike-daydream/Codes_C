#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5 + 10;
#define endl '\n'

signed main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int a[] = { 1,2,3,4,5 };
    cout << (find(a, a + 5, 4) != a + 5) << endl;
    cout << (find(a, a + 5, 2) == a + 5) << endl;
    return 0;
}