#include <cstdio>

int main(){
    int a, b, c, d, e, f, delta;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    delta = (c * 60 + d) - (a * 60 + b); // 相隔分钟
    e = delta / 60;
    f = delta % 60;
    // e = c - a; 进位计算
    // f = d - b;
    // if (d - b < 0){
    //     f += 60;
    //     e--;
    // }
    printf("%d %d", e, f);
    return 0;
}