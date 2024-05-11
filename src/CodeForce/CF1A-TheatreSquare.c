#include <stdio.h>
#include<math.h>
#define ll long long
int main() {
    ll n, m, a, result, mm, nn;
    scanf("%d %d %d", &n, &m, &a);
    printf("%lld %lld %lld\n", n, m, a);
    // printf("%p %p %p\n", &n, &m, &a);
    mm = ceil(m * 1. / a), nn = ceil(n * 1. / a);
    result = mm * nn;
    printf("%lld", result);
    return 0;
}