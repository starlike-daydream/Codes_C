#include<stdio.h>

int main(){
    printf("\a\141\v?\?");
    printf("1111\r11");
    printf("\r");//删除上一行
    // printf("\n");
    printf("\x41");
    printf("123\b");
    return 0;
}