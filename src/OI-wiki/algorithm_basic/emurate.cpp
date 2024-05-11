#include<bits/stdc++.h>
using namespace std;

int main() {
    int cnt1 = 0,cnt2=0;
        int arr[] = { 1,2,6,54,-3,-1,9,6 };
    for(int i = 0;i < sizeof arr/4;i++) {
        for (int j = 0; j < sizeof arr/4; j++) {
            if (arr[i] + arr[j] == 0)
                cnt1++;
        }
    }
    for(int i = 0;i < sizeof arr/4-1 ;i++) {
    // for (int j = i+1; j < sizeof arr/4; j++) {
        for (int j = 0; j < i; j++) {
            if (arr[i] + arr[j] == 0)
                cnt2++;
        }
    }
    bool put[1000];
    int N = 100;
    for (int i = 0;i < sizeof arr / 4;i++) {
        put[arr[j] + N] = 1;
    }

    cout << cnt1 << endl;
    cout<<cnt2*2<<endl;
    return 0;
}