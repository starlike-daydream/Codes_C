#include<bits/stdc++.h>
#define ll long long;
#define IOS ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;

int main(){
    int n, sum = 0, mine, total = 1;
    cin>>n;
    for (;total <= 500; total++){
        sum += total;
        for (mine = 1; mine <= total; mine++)
            if(sum - mine - 2 * mine == n){
                cout<<mine<<' '<<total;
                return 0;
            }
    }
}