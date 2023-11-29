#include<bits/stdc++.h>
using namespace std;
//ax + by = c;
int main(){
    int count = 0,a,b,c;
    cin>>a>>b>>c;
    for (int x = 0;x  < 1000; x++){
        for (int y = 0; y < 1000; y++){
            if(a * x + b * y == c)
                count++;
        }
    }
    cout<<count;
}