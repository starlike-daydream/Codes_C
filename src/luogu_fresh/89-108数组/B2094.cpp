#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,max=-10000001;
    long long sum = 0;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin>>arr[i];
        if(arr[i] > max)
            max = arr[i];
    }
    for (int i = 0; i < n; i++){
        if(arr[i] != max)
            sum+=arr[i];
    }
    cout<<sum;
    return 0;
}   