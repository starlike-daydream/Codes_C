#include <cstdio>
#include <cmath>

int main()
{
    int s, v;
    scanf("%d%d", &s, &v);
    int t_walk = ceil(s * 1.0 / v) + 10;
    int from_zero = 60 * (24 + 8) - t_walk;
    int hh = (from_zero / 60) % 24;
    int mm = from_zero % 60;
    printf("%02d:%02d", hh, mm);
    // int s, v, h, m, req, t, delta;
    // scanf("%d%d", &s, &v);
    // req = 8 * 60 - 10;
    // t = ceil(s * 1.0 / v);
    // delta = req - t;
    // if (req - t < 0)
    //     delta += 60 * 24;
    // h = delta / 60;
    // m = delta % 60;
    // printf("%02d:%02d", h, m);
    return 0;
}