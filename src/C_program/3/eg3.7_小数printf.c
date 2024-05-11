#include<stdio.h>

int main() {
    // float f;
    double f;
    f= 10000.0 / 3;
    printf("%f\n", f);
    f= 10000 / 3.0;
    printf("%f\n", f);
    printf("%-25.15f,%25.15f\n", f, f);
    printf("%e\n",123.456);//指数输出：小数6位，指数5位
    return 0;
}