#include <cstdio>
#include <cstring>
int main() {
    int n;
    char s[20],ans[20];
    scanf("%d\n", &n);
    while (n--) {
        fgets(s,sizeof s,stdin);
        int a, b;
        char c;
        if (s[0] >= 'a' && s[0] <= 'c')
            c = s[0], s[0] = ' ';
        sscanf(s, "%d %d", &a, &b);
        switch (c) {
        case 'a': sprintf(ans,"%d+%d=%d", a, b, a + b);break;
        case 'b': sprintf(ans,"%d-%d=%d", a, b, a - b);break;
        case 'c': sprintf(ans,"%d*%d=%d", a, b, a * b);break;
        }
        printf("%s\n%d\n",ans, strlen(ans));
    }
    return 0;
}