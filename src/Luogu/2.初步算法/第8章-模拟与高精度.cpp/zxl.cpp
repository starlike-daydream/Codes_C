#include <stdio.h>
#include <string.h>
char s1[510];
char s2[510];
int c[510];
int a[510], b[510];

int main() {
    scanf("%s\n%s", s1, s2);
    int lena, lenb, lenc;
    lena = strlen(s1);
    lenb = strlen(s2);
    // printf("%d %d ", lena, lenb);
    lenc = (lena >= lenb) ? lena : lenb;//确保c的长度即使在a与b的最高位进位后够用,索引会从lenc开始，所以这里长度取a与b的较长的一个就好了
    // printf("%d\n", lenc);
    for (int i = 0; i < lena; i++) {
        a[i] = s1[i] - '0';
    }
    for (int j = 0; j < lenb; j++) {
        b[j] = s2[j] - '0'; //分开求才能求出完整的a/b
    }
    int temp = 1;
    for (int i = lenc; i > 0; i--) {//计算区间是第一位到a/b的最高位
        c[i] += (a[lena - temp] + b[lenb - temp]);//简化逻辑，先求出前面的数进的位，加上a和b对应位的和
        c[i - 1] = c[i] / 10; //再把个位以上给前面
        c[i] %= 10; //最后保留个位，以此循环往复
        // if (c[i] >= 10) { c[i - 1] += c[i] / 10; c[i] %= 10; } //先求和然后再处理进位就会方便很多了，就不用先处理a+b的每一位的进位，再让其加上c对应位，再对c对应位进位处理，最后还要处理a+b的进位了
        // c[i - 1] += (a[lena - temp] + b[lenb - temp]) / 10;
        // printf("%d %d\n", c[i], c[i-1]);
        temp++;
    }
    int start = 0;
    // for (int i = 0; i < lenc; i++) {
    //     if (c[i] == 0) start++;
    //     else break;
    // }
    // while (!c[start]) start++; //简化逻辑，舍去前导0，相应的，循环结束条件就要变成起始位置+长度
    if (c[0] == 0) start++; //舍去一次就好了，最多就会舍一个没有进位的位
    else lenc++; //但最后进位了，长度要加1
    for (int i = start; i < start + lenc; i++) printf("%d", c[i]);
    return 0;
}