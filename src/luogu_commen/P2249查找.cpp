#include <bits/stdc++.h>
using namespace std;
int n, m, num[1000050], fin;

int binary_search(){
    int min = 0, max = n, mid=0;
    // cout<<min<<' '<<mid<<' '<<max<<endl;
    while (min < max){
        mid = (min + max) / 2;
        if (fin > num[mid]) 
            min = mid + 1;
        else if(fin == num[mid])
            return mid + 1;
        else
            /* max = mid - 1 */;
        // cout<<min<<' '<<mid<<' '<<max<<endl;
    }
    return -1;
    
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> num[i];
    for (int i = 0; i < m; i++){
        cin >> fin;
        cout << binary_search()  << ' ';
    }
    return 0;
}