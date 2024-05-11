#include<stdio.h>
#include <stdlib.h>
int main() {
    FILE* in, * out;
    char ch, infile[10], outfile[10];
    printf("请输入读入文件的名字：");
    scanf("%s", infile);
    printf("请输入输出文件的名字：");
    scanf("%s", outfile);
    if ((in = fopen(infile, "r")) == NULL) {
        printf("无法打开此文件");
            exit(0);
    }
    if ((out = fopen(outfile, "w")) == NULL) {
        printf("无法打开此文件");
            exit(0);
    }
    ch = fgetc(in);
    while (!feof(in)) {
        fputc(ch, out);
        putchar(ch);
        ch = fgetc(in);
    }
    putchar(10);
    fclose(in);
    fclose(out);
    return 0;


}