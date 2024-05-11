#include<stdio.h>

int main() {
    int i = 1;
    int j = 2;
    printf("%d\n", i++ + j);
    printf("%d\n", i + (++j));
    int c = 3;
    float f = 2.5;
    double d = 7.5;
    //算数运算具有左结合性，赋值运算具有右结合性
    printf("%f", 10 + 'a' + c * f - d / 3);
    d = (double)i;//(类型转换符)表达式-->所需类型（运算优先级高于%）
}