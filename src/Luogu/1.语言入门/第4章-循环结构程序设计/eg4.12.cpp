// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int n, sum = 0, i = 0;
//     cin >> n;
//     n *= 10;
//     while (--n) sum += ++i;
//     cout<<sum/10.0;
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    double sum = 0;
    cin >> n;
    for (double i = 0.1;i+0.01 < n;i += 0.1) {
        sum += i;//cout << i << endl;
    }//浮点数计算会产生误差，如果不对==判断做处理会出现死循环，但<也会提前退出，所以需要+0.01或1e-3规避误差
    cout<<sum<<endl;
    return 0;
}