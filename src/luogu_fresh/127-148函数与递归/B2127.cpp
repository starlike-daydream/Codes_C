#include <bits/stdc++.h>
using namespace std;
int yin(int n), n;
//B2127求正整数2和n之间的完全数
int main()
{
    cin >> n;
    for (int i = 2; i <= n; i++)
        if (yin(i) == i)
            cout << i << endl;
    return 0;
}
int yin(int n)
{
    int ans = 0;
    for (int i = 1; i < n; i++)
        if (n % i == 0)
            ans += i;
    return ans;
}