#include<stdio.h>

int main() {
    unsigned short a = 50;
    printf("%u\n", a);
    unsigned short b = -1;
    printf("%u\n", b);
    // 检查ASCII代码从128到256的扩展字符
    unsigned short c = 128;
    printf("%d:%c", c, c);
    return 0;
}