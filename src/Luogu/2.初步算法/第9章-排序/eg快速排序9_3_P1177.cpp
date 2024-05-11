#include<bits/stdc++.h>
using namespace std;
void qsort(int a[], int l, int r);
int arr[10010], n;
int main() {
    cin >> n;
    for (int i = 0;i < n;i++)
        cin >> arr[i];
    // int arr[] = { 6,5,4,3,2,1,0,7 };
    qsort(arr, 0, n - 1);
    // for (int i = 0;i < sizeof(arr) / 4;i++)
    for (int i = 0;i < n;i++)
        cout << arr[i] << ' ';
    cout << endl;
    return 0;
}
void qsort(int a[], int l, int r) {
    // for (int i = l;i < /* int(sizeof(a))/4 */r;i++) {
    //     cout << a[i] << ' ';
    // }
    int i = l, j = r, flag = (l + r) / 2, temp;
    do {
        while (a[i] < a[flag])
            i++;
        while (a[j] > a[flag])
            j--;
        if (i <= j) {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            i++;
            j--;
        }
    } while (i <= j);
    // cout << endl;
    if (flag > i)
        qsort(a, l, i);
    if (flag < j)
        qsort(a, j, r);
}