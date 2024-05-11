#include<bits/stdc++.h>
using namespace std;
int v,g,vitamin[35],feed[25][35];
int main(){
    cin>>v;
    for(int i = 1;i <= v;i++)
        cin>>vitamin[i];
    cin>>g;
    for (int i = 1;i <= g;i++) {
        feed[i][0] = i;
        for (int j = 1;j <= v;j++) {
            cin >> feed[i][j];
        }
    }
    return 0;
}