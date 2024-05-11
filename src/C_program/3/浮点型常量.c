#include<stdio.h>

int main() {
    float a = 3.1415926;
    float b = 3.14159f;
    // long double c = 1.23123442643265345432L; 不支持long double
    printf("%f\n%f\n%.20f\n", a, b, c);
    return 0;
}