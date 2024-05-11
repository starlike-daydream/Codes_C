#include<stdio.h>

int main() {
    short flag = 1;
    for (int i = 2;i <= 100;i++) {
        flag = 1;
        for (int j = 2;j*j <= i;j++) {
            if (i % j == 0) {
                flag = 0;
            }
        }
        if (flag == 1 || i == 2) {
            printf("%d ", i);
        }
    }
}