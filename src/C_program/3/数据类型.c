#include<stdio.h>
unsigned long long pow(int x, int a) {
    unsigned long long y = 1;
    for (int i = 1;i <= a;i++) {
        y *= x;
    }
    return y;
}
int main() {
    //整数类型
    // int a = 1;
    int a = __INT_MAX__;
    // short b = 2;
    short b = __SHRT_MAX__;
    // short b = __SHRT_WIDTH__;
    // short int b1 = 3;
    short int b1 = __SHRT_MAX__ + 10;//和short没有区别
    long int c = __LONG_MAX__;//和int最大值一样
    // long int c = __LONG_LONG_MAX__;
    long long int d = __LONG_LONG_MAX__;//和long long一样
    // long long int d = __LONG_MAX__;//long long要用lld输出
    // long long int d = 5;
    long long d1 = __LONG_LONG_MAX__;
    unsigned long long ull = pow(2, 63);
    // long long d1 = __LONG_MAX__+10;
    // long long d1 = __LONG_MAX__;//long long要用lld输出
    char e = 'c';
    // bool f = 0;
    _Bool f = 0;
    //浮点类型
    float g = 1.1;
    double h = 1.2;
    // float_complex i;
    // float_complex i = 1;
    // double_complex j = 1;
    // long long_complex k = 1;
    enum l;
    // enum l /= 1;
    // void m;
    // void m = 0;
    int* n = &a;
    short* b11 = &b1;
    long long* dd1 = &d1;
    float* g1 = &g;
    int o[] = {};
    struct p {
        // int a1 = 1;
        int a1;
        int b1;
        int* aa1;
    };
    struct p p1;
    union q {
        int a2;
    };
    union q q1;
    long double ld = 5;
    printf("int-a:%d\nshort int-b:%d\nshort-b1:%d\nlong int-c:%d\nlong long int-d:%lld\nlong long-d1:%lld\n", a, b, b1, c, d, d1);
    printf("char-e:%c\nint-e:%d\n_Bool-f:%d\nfloat-g:%f\ndouble-h:%f\n", e, e, f, g, h);
    printf("n(a):%d\nb11:%d\ndd1:%d\ng1:%d\n", n, b11, dd1, g1);
    printf("%d\n", p1.a1);
    printf("%d\n", p1.aa1);
    printf("%d\n", q1.a2);
    printf("ull:%u\n", ull);
    printf("ld:%f\n",ld);
    return 0;
}