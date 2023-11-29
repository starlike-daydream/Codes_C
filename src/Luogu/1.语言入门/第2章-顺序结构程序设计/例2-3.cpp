#include<iostream>
#include<cmath>
#define PI 3.141593
using namespace std;

int main(){
    int r1 = 4, r2 = 10;
    double V, l;
    V = 4.0 / 3 * PI * (r1 * r1 * r1 + r2 * r2 * r2);
    l = pow(V, 1.0 / 3);
    // cout<<(int)l<<endl;
    printf("%d\n",int(l));
    // int r1 = 4, r2 = 10, ans;
    // double v1, v2;
    // v1 = 4.0 / 3 * PI * pow(r1,3);
    // v2 = 4.0 / 3 * PI * pow(r2,3);
    // ans = (int)pow((v1 + v2),1.0 / 3);
    // cout<<ans;
}

//开3次方根可以用pow(num,1.0/3),而且不能用1/3，因为结果是0