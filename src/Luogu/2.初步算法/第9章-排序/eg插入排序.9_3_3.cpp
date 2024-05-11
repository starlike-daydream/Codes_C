#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main() {
    int arr[] = { 13,1,6,3,5,4,3,2,1 };
    for (int i = 1;i < sizeof(arr) / 4;i++) {
        // cout << "i:" << i << endl;
        for (int j = 0;j < i;j++) {
            cout << arr[j] << ' ';
        }
        int j, num = arr[i];
        cout << "num:" << num;
        for (j = i - 1;j >= 0;j--) {
            // cout << "j:" << j << endl;
            if (num < arr[j]) {
                arr[j + 1] = arr[j];
            }
            else
                break;
        }
        cout<<" num_location:"<<j+1<<" ";
        arr[j+1] = num;
        cout<<endl;
    }
    for (int i = 0;i < sizeof(arr) / 4;i++) {
        cout << arr[i] << ' ';
    }
    cout << endl;
    return 0;
}