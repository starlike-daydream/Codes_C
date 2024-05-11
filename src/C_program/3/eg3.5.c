#include<stdio.h>
#include<math.h>
int main() {
    double x1, x2, delta, a, b, c, ba;
    // printf("%s", "请依次输入abc,中间用空格隔开:\n");
    printf("请依次输入abc,中间用空格隔开:\n");
    scanf("%lf%lf%lf", &a, &b, &c);
    delta = b * b - 4 * a * c;
    ba = -b / (2 * a);
    x1 = ba + delta / (2 * a), x2 = ba - delta / (2 * a);
    printf("x1=%7.2f\nx2=%7.2f", x1, x2);
    return 0;
}