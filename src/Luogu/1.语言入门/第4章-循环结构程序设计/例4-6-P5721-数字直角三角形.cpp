#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,i=1;
    cin>>n;
    for(int j =0;j < n;j++) {
        for (int k=0; k < n-j; k++)
            printf("%02d",i++);
        printf("\n");
    }
    return 0;
}