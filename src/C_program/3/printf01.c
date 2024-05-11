#include<stdio.h>

int main() {
    int a, b;
    a = 3, b = 4;
    printf("%d %d\n", a, b);
    a = 12, b = 123;
    printf("a=%d b=%d\n", a, b);
    printf("%5d\n%5d\n", 12, -345);
    char ch = 'a';
    printf("%c\n", ch);
    printf("%5c\n", ch);
    short s = 121;//01111001
    printf("%c\n", s);
    s = 377;//00000001,01111001
    printf("%c\n", s);//超过char取值范围，输出最后一个字节的数据
    printf("%s", "CHINA");
    return 0;
}