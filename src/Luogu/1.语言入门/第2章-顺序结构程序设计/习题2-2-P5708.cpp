#include <cstdio>
#include <cmath>

int main(){
    double a, b, c;
    scanf("%lf%lf%lf", &a, &b, &c);
    double p = (a + b + c) / 2;
    double s = sqrt(p * (p - a) * (p - b) * (p - c));//注意表达式
    printf("%.1f", s);//格式化输出保留小数是舍四入五的
    return 0;
}