#include<bits/stdc++.h>
using namespace std;
int arr[5050][5050];
// int max[5050];
int search(int);
int n, m, eat, eaten;
int main() {
    cin >> n >> m;
    for (int i = 0;i < m;i++) {
        cin >> eat >> eaten;
        arr[eat][eaten] = 1;
    }
    int res = 0;
    for (int i = 1;i <= n;i++) {
        res = max(res, search(i));
    }
    cout << res << endl;
    return 0;
}

int search(int road) {
    int count = 1;
    int result = 0;
    for (int i = road;i < n;i++) {
        // cout << "i:" << i << "     i+1:" << i + 1 << "      connect?" << arr[i][i + 1] << endl;
        if (arr[i][i + 1] == 1) {
            count++;
        }
        else {
            // cout << "result:" << result << endl;
            result = max(count, result);
            count = 0;
        }
    }
    return result == 0 ? count : result;
}