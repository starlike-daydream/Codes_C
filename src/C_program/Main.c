#include <stdio.h>
#define ll long long
ll array[100010];
/*
5 29
5 2 4 1 3
9
4 2 4 1
1 1 3 2
2 2 4 3
3 3 5 2
5 3 3 0
4 1 5 2
2 3 5 0
3 2 4 0
4 3 4 1
*/
int main() {
    int n, p, q, t, l, r, k;
    ll ss, sum, res;
    scanf("%d%d", &n, &p);
    for (int i = 0; i < n; i++) {
        scanf("%lld", array + i);
    }
    scanf("%d", &q);
    for (int i = 0; i < q; i++) {
        // for (int j = 0; j < n; j++) {
        //     printf("%lld ", *(array + j));
        // }
        // printf("\n");
        scanf("%d%d%d%d", &t, &l, &r, &k);
        switch (t) {
        case 1:
            for (int ii = l - 1; ii < r; ii++) {
                array[ii] += k;
                array[ii] %= p;
            }
            break;
        case 2:
            for (int ii = l - 1; ii < r; ii++) {
                array[ii] *= k;
                array[ii] %= p;
            }
            break;
        case 3:
            for (int ii = l - 1; ii < r; ii++) {
                // printf("before:%d\n", array[ii]);
                if (k == 0) {
                    // if (array[ii] == 0 && k == 0) {
                    array[ii] = 1;
                }
                else {
                    res = 1;
                    for (int j = 0;j < k;j++) {
                        res *= array[ii];
                        res %= p;
                    }
                    array[ii] = res;
                }
                // printf("after:%d\n", array[ii]);
            }
            break;
        case 4:
            sum = 0;
            for (int ii = l - 1; ii < r; ii++) {
                if (k == 0) {
                    // if (array[ii] == 0 && k == 0) {
                    sum += 1;
                }
                else {
                    res = 1;
                    for (int j = 0;j < k;j++) {
                        res *= array[ii];
                        res %= p;
                    }
                    sum += res;
                }
            }
            printf("%lld\n", sum % p);
            break;
        case 5:
            ss = 1;
            for (int ii = l - 1; ii < r; ii++) {
                ss *= array[ii];
                ss %= p;
            }
            printf("%lld\n", ss);
        }
    }
}