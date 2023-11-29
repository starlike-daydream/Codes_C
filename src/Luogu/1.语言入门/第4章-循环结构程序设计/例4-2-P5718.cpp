#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,a,min=1000;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        if(min>a)
            min=a;
    }
    cout<<min;
    return 0;
}