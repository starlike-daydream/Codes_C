#include<stdio.h>

int main() {
    int i = 666;
    printf("%i\n", i);
    int a = -1;//32位1
    printf("%d\t%o\n", a, a);
    printf("%d\t%o\t%x\n", a, a, a);
    printf("%lx\t%12x\n", a, a);
    printf("%lX\t%12X\n", a, a);//输出16进制的大写字母
    unsigned u = 1;//省略了int
    printf("%u\n", u);
    double d = 12345678954321;
    printf("%f\t%e\t%g\n", d, d, d);//选择f和e中较短的
    printf("%f\t%E\t%G\n", d, d, d);//大写E
    printf("%%");//输出百分号
    return 0;
}