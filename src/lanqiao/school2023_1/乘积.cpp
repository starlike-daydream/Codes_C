#include<bits/stdc++.h>
using namespace std;
int arr[] = { 99, 22, 51, 63, 72, 61, 20, 88, 40, 21, 63, 30, 11, 18, 99, 12, 93, 16, 7, 53, 64, 9, 28, 84, 34, 96, 52, 82, 51, 77 };
int main() {
    int n = 0;
    int count = 0;
    // cout<<sizeof(arr)/4;
    for (int i = 0; i <= 29; i++) {
        for (int j = i;j <= 29;j++) {
            if(i==j)
                continue;
            n++;
            if(arr[i]*arr[j]>=2022)
                count++;
        }
    }
    cout<<n<<endl;
    cout<<count<<endl;
    return 0;
}