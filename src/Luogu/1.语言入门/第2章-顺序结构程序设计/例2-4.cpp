#include <bits/stdc++.h>
using namespace std;
// y=(110-x)(10+x)=-x*x+100x+1100=3500 --> -x*x+100x-2400=0
// x*x-100x+2400=0
int main(){
    double a = 1,b = -100, c = 2400;
    double delta = pow(b,2) - 4 * a * c;
    double ans = (-b + sqrt(delta))/(2 * a);//求出较大根，便是最小解，别忘了括号
    cout<<110-int(ans + 0.5)<<endl;//小数部分大于0.5则进一（四舍五入），求出定价
    printf("%d\n",110-int(ans+0.5));
    // double x1, x2, delta;
    // delta = 100 * 100 - 4 * (-1) * (-2400);
    // x1 = (-100 + sqrt(delta)) / 2 / (-1);
    // x2 = (-100 - sqrt(delta)) / 2 / (-1);
    // cout << x1 << " " << x2 << endl;
    // cout << 110 - (int)(max(x1, x2) + 0.5)<<endl;
    return 0;
}