#include<stdio.h>
#define PI 3.1415926
int main(){
    const float pi=3.1415926;//占存储单元
    printf("%f\n",PI);//编译后被替换
    printf("%f\n",3.1415926);
    printf("%f",pi);//常变量更方便，C99后才有
    return 0;
}