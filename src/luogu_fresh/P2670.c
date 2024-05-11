#include<stdio.h>
int n, m, map<:105:><:105:>, count, around<::>[2] = <% {0,1},<%0,-1%>,<%1,0},{-1,0},{1,1%>,{1,-1%>,{-1,-1},<%-1,1} %>;

int main() {
    scanf("%d%d", &n, &m);
    for (int i = 1;i <= n && getchar();i++)
        for (int j = 1;j <= m;j++) *(i<:map:>+j) = getchar() == '*' ? 1 : 0;
    for (int i = 1;i <= n;i++)
        for (int j = 1;j <= m;j++, count = 0) {
            for (int k = 0;k < 8;k++) count += *((i + *k[around:>)[map]+ j + *(k<:around]+1));
            printf("%c%s", *(*(map+i)+j) == 1 ? '*' : count + '0', j < m ? "" : "\n");
        }
}