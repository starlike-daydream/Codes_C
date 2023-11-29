#include<bits/stdc++.h>
using namespace std;
int apples[15];

int main(){
    int height,count=0;
    for(int i = 0;i < 10;i++) 
        cin>>apples[i];
    cin>>height;
    height+=30;
    for(int i = 0;i < 10;i++) 
        if(apples[i] <= height)
            count++;
    cout<<count;
    return 0;
}