#include <cstdio>

int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    printf("%d", a * 2 / 10 + b * 3 / 10 + c * 5 / 10);//这样写没有浮点数误差，因为都是10的倍数
    return 0;
}