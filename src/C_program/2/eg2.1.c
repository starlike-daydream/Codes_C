#include<stdio.h>

int main(void) {
    int sum = 1;
    for (int i = 1;i <= 5;i++) {
        printf("%d*%d=%d\n", sum, i, sum * i);
        sum *= i;
    }
    printf("sum:%d\n", sum);
    sum = 1;
    for (int i = 1;i <= 11;i += 2) {
        printf("%d*%d=%d\n", sum, i, sum * i);
        sum *= i;
    }
    printf("sum:%d", sum);
    return 0;
}