#include<bits/stdc++.h>
using namespace std;
int arr[1000];


int main() {
    int n, sum = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            sum += arr[i] * arr[j];
        }
    }
    cout<<sum<<endl;
}