#include <bits/stdc++.h>
using namespace std;
int find_max(int, int); // 寻找最大公约数

int main()
{
    int a, b, c, min, max; // 三角形的三条边，正弦值最小锐角，斜边
    cin >> a >> b >> c;
    if (c < a)
        swap(a, c);
    if (c < b)
        swap(b, c);
    // cout << a << " " << b << " " << c << endl;
    // cout << find_max(3, 6) << endl;
    // double j1 = a * 1.0 / c, j2 = b * 1.0 / c;
    if (a >= b){
        max = find_max(b, c);
        cout << b / max << '/' << c / max;//约分
    }
    else{
        max = find_max(a, c);
        cout << a / max << '/' << c / max;
    }
    return 0;
}

int find_max(int a, int b){
    int i = max(a, b);
    for (; i >= 1; i--)
        if (a % i == 0 && b % i == 0)
            break;
    return i;
}