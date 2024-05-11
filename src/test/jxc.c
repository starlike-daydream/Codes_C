#include <stdio.h>

int main() {
    // int arr[4][4] = { 0 };
    int sum = 0, i, j, num;
    for (i = 0;i < 4;i++) {
        for (j = 0;j < 4;j++) {
            // scanf("%d", *(arr + i) + j);
            // if (i == j) sum += arr[i][j];
            scanf("%d", &num);
            if (i == j) sum += num;
        }
    }
    printf("%d", sum);
}
/*
 1 2 3 4
 5 6 7 8
 9 1 1 2
 3 4 5 6
*/