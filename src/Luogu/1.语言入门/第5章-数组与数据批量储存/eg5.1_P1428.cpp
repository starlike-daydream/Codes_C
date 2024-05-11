// #include<cstdio>
#include<iostream>
using namespace std;
// int a[105];
int main() {
    int n, cnt, a[105];
    // scanf("%d",&n);
    cin >> n;
    for (int i = 0;i < n;i++)
        // scanf("%d",&a[i]);
        cin >> a[i];
    for (int i = 0;i < n;i++) {
        cnt = 0;
        for (int j = 0;j < i;j++)
            if (a[i] > a[j])
                cnt++;
        // printf("%d ",cnt);
        cout << cnt << " ";
    }
    return 0;
}