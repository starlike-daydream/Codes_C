#include <bits/stdc++.h>
using namespace std;

int main() {
    int n1 = 8, t1 = 30, n2 = 10, t2 = 6;
    int t3 = 10;  
    double inc_rate = (1.0 * n1 * t1 - n2 * t2) / (t1 - t2);//y1=(a+bx1)/x1;y2=(a+bx2)/x2;a=(yx-bx)/x --> (y1x1-bx1)=(y2x2-bx2) --> bx2-bx1=(y2x2-y1x1) --> b = (y2x2-y1x1)/(x2-x1)
    double init_num = t2 * n2 - inc_rate * t2;//a=yx-bx
    double init_num1 = t1 * n1 - inc_rate * t1;
    double ans = (init_num + inc_rate * t3) / t3;//y=(a+bx)/x
    double init_num3 = t3 * ans - inc_rate * t3;
    double ans2 = (init_num + inc_rate * t2) / t2;
    double ans1 = (init_num + inc_rate * t1) / t1;
    cout<<ans<<endl; 
    cout<<ans2<<endl; 
    cout<<ans1<<endl; 
    cout<<init_num<<" "<<init_num1<<" "<<init_num3;
    return 0;
}