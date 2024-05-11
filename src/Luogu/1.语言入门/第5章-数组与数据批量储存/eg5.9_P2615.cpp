#include<bits/stdc++.h>
using namespace std;
int arr[40][40];

int main() {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int n, num = 2, i, j;
    cin >> n;
    for (i = 1, j = n / 2 + 1, arr[i][j] = 1;num <= n * n;num++)
        if (i == 1 && j != n)
            arr[n][++j] = num, i = n;
        else if (i != 1 && j == n)
            arr[--i][1] = num, j = 1;
        else if (i == 1 && j == n)
            arr[++i][j] = num;
        else
            if (arr[i - 1][j + 1] == 0)
                arr[--i][++j] = num;
            else
                arr[++i][j] = num;
    for (i = 1;i <= n;i++)
        for (j = 1;j <= n;j++)
            cout << arr[i][j] << (j == n ? '\n' : ' ');
    return 0;
}