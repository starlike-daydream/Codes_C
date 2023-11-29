#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    double sum = 0,arr[n],c = 0,avg;
    cin>>arr[0];
    int min = arr[0],max = arr[0];
    sum += arr[0];
    for (int i = 1; i < n; i++){
        cin>>arr[i];
        if(arr[i] > max)
            max = arr[i];
        if(arr[i] < min)
            min = arr[i];
        sum += arr[i];
    }
    avg = (sum - max - min) / (n - 2);
    for (int i = 0; i < n; i++){
        if(arr[i] != max && arr[i] != min)
            if(fabs(arr[i]-avg) > c)
                c = fabs(arr[i]-avg);
    }
    cout<<fixed<<setprecision(2)<<avg<<" "<<fixed<<setprecision(2)<<c;
    return 0;
}   