#include<stdio.h>

int main() {
    int sum, i;
    sum = 1, i = 2;
    while (i <= 5) {
        sum = sum * i;
        i = i + 1;
    }
    printf("%d\n", sum);
    return 0;
}