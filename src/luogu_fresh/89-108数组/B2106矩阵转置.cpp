#include <bits/stdc++.h>
using namespace std;
int n, m, arr[105][105];

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> arr[i][j];
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++)
            cout<<arr[j][i]<<" ";
        cout<<endl;
    }
    return 0;
}