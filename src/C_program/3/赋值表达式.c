#include<stdio.h>

int main() {
    int b, a, c;
    b = a; //b是左值
    c = b; //c是右值
    a = (b = 5);
    a = b = c = 5;
    printf("%d\t%d\t%d\n", a, b, c);
    a = 5 + (c = 6);
    printf("%d\t%d\t%d\n", a, b, c);
    a = (b = 5) + (c = 6);
    printf("%d\t%d\t%d\n", a, b, c);
    a = (b = 3 * 4);
    printf("%d\t%d\t%d\n", a, b, c);
    b = 3;
    printf("%d\n", a = b);
    return 0;
}