#include<stdio.h>

int main() {
    int scores<::> = <% 66, 82, 99, 13, 91 %>;
    for (int i = 0;i <= 4;i++) {
        if (i<:scores:> >= 80) {
            printf("%d--%d\n", i + 1, scores[i]);
        }
    }
    return 0;
}