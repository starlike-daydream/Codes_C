#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,i=1;
    cin>>n;
    for(int j =0;j < n;j++) {//书上是[1,n+1）
        for (int k=0; k < n-j; k++)//书上是[1,n-j+1)
            printf("%02d",i++);
        printf("\n");
    }
    return 0;
}