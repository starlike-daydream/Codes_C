#include<stdio.h>

int main() {
    int sign = 1;
    double sum = 1;
    for (int i = 2;i <= 100;i++) {
        sign *= -1;
        printf("%f+(%d*1/%d)\t=%f\n", sum, sign, i, sum + sign * (1 / i));
        sum += sign * (1.0 / i);
    }
    printf("sum:%f", sum);
}