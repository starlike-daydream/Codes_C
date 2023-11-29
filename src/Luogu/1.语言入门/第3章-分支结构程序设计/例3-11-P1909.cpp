#include <iostream>
using namespace std;

int main()
{
    int n, n1, p1, n2, p2, n3, p3;
    cin >> n >> n1 >> p1 >> n2 >> p2 >> n3 >> p3;
    int t1 = !(n % n1) ? n / n1 * p1 : (n / n1 + 1) * p1;
    int t2 = !(n % n2) ? n / n2 * p2 : (n / n2 + 1) * p2;
    int t3 = !(n % n3) ? n / n3 * p3 : (n / n3 + 1) * p3;
    int total = t1;
    if (total > t2)
        total = t2;
    if (total > t3)
        total = t3;
    cout << total << endl;
    return 0;
}