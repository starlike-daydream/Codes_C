#include <bits/stdc++.h>
using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;
    double delta = b * b - 4 * a * c;
    // if (delta < 0) {
    //     cout << "No answer!";
    //     return 0;
    // }
    double x1 = (-b + sqrt(delta)) / 2 / a, x2 = (-b - sqrt(delta)) / 2 / a;
    // if (delta == 0)cout << "x1=x2=" << fixed << setprecision(5) << x1;
    // else {
    //     if (x1 < x2)cout << "x1=" << fixed << setprecision(5) << x1 << ";x2=" << fixed << setprecision(5) << x2;
    //     else cout << "x1=" << fixed << setprecision(5) << x2 << ";x2=" << fixed << setprecision(5) << x1;
    // }
    if (delta < 0) cout << "No answer!";
    else if (delta == 0) printf("x1=x2=%.5f", x1);
    else printf("x1=%.5f;x2=%.5f", min(x1, x2), max(x1, x2));
}