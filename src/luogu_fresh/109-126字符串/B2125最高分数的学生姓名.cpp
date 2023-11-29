#include <bits/stdc++.h>
using namespace std;
struct info{
    int score;
    string name;
} infos[105];

int main(){
    int n, max = 0, idx = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> infos[i].score >> infos[i].name;
    for (int i = 0; i < n; i++)
        if (infos[i].score > max){
            max = infos[i].score;
            idx = i;
        }
    cout<<infos[idx].name<<endl;
    return 0;
}