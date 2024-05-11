#include<iostream>
using namespace std;
const int N = 2e5+9;
int a[N];

int main(){
    int n,x;
    cin>>n;
    while(n--){
        cin>>x;
        a[x]++;
    }
    for(int i=0;i<=2e5;i++){
        for(int j=0;j<a[i];j++) cout<<i<<' ';
    }
    return 0;
}