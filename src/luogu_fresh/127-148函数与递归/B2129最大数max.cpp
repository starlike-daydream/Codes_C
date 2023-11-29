#include <bits/stdc++.h>
using namespace std;
int a, b, c, max(int, int, int);

int main(){
    cin >> a >> b >> c;
    double m = max(a, b, c) * 1.0 / max(a + b, b, c) / max(a, b, b + c);
    printf("%.3f", m);
    return 0;
}

int max(int x, int y, int z){
    int max = x >= y ? x : y;
    max = max > z ? max : z;
    return max;
}