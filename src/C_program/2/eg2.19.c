#include<stdio.h>

int main() {
    int sign = 1;//符号
    double sum = 0;//总和
    double term;//算式中间部分
    int deno = 1;//自增
    while (deno <= 100) {
        term = sign * 1.0 / deno;
        sum = sum + term;
        sign = -1 * sign;
        deno = deno + 1;
    }
    printf("%f\n", sum);
    return 0;
}