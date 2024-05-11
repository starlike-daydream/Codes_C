#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int get_sum(int);
bool cmp(int,int);
int main() {
    vector<int> v;
    int n = 0;
    for(int i = 0;i<64;i++){
        cin>>n;
        v.push_back(n);
    }
    sort(v.begin(),v.end(),cmp);
    cout<<v.at(0)<<endl;
    return 0;
}

int get_sum(int n) {
    int sum = 0;
    for (int i = 0; i <= 5; i++) {
        sum += n / int(pow(10, i)) % 10;
    }
    return sum;
}

bool cmp(int x,int y){
    return get_sum(x)<get_sum(y);
}