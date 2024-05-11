#include<bits/stdc++.h>
using namespace std;
// int tree[10010];
int n, m, a, b, cnt = 0;
int main() {
    // int tree[10010] = {0};
    int tree[10010];
    memset(tree, 0, sizeof tree);//需要cstring头文件，只能设为0/-1
    // memset(tree, 0, sizeof(tree));//()用法，也可以用空格
    cin >> n >> m;
    for (int i = 0;i <= n;i++)
        tree[i] = 1;
    for (int i = 0;i < m;i++) {
        cin >> a >> b;
        for (int j = a;j <= b;j++)
            tree[j] = 0;
    }
    for (int i = 0;i <= n;i++)
        if (tree[i] == 1)
            cnt++;
    cout << cnt << endl;
    return 0;
}