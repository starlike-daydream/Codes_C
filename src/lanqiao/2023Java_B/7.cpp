#include <iostream>
#include<cmath>
using namespace std;
int n,m,cnt=0;
bool is_odd(int x){
    string s = to_string(x);

    for (int i = 0;i < n;i++) if ((i % 2 == 0 && int(s[i] - 48) % 2 != 1) || (i % 2 == 1 && int(s[i] - 48) % 2 != 0)) return 0;
    return 1;
}
bool is_less(int x) {
    string s = to_string(x);
    int sum = 0;
    for(int i=0;i<n-4;i++){
        int sum=0;
        for (int j = i;j <= i + 4;j++) sum += int(s[j] - 48);
        if(sum>m) return 0;
    }
    return 1;
}
int main() {
    cin >> n >> m;
    int st = pow(10, n - 1), end = pow(10, n);
    for(int i=st;i<end;i++) if(is_odd(i)&&is_less(i)) cnt++;
    cout<<cnt%998244353;
    return 0;
}