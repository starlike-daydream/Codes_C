#include <bits/stdc++.h>
using namespace std;

int main(){
    double p;
    int q, a, b, c, d;
    // cin >> p;
    scanf("%lf",&p);
    q = int(p * 10);
    a = q / 1000 % 10;
    b = q / 100 % 10;
    c = q / 10 % 10;
    d = q % 10;
    // cout << d << "." << c << b << a << endl;
    printf("%d.%d%d%d",d,c,b,a);
    // double num;
    // int ge,shi,bai,xiao;
    // cin >> num;
    // ge = (int)num % 10;
    // shi = (int)num / 10 % 10;
    // bai = (int)num / 100 % 10;
    // xiao = (int)(num * 10) % 10;
    // cout<<xiao<<"."<<ge<<shi<<bai;
    return 0;
}