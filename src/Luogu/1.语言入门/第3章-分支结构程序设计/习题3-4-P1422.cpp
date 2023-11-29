#include <bits/stdc++.h>
#define ll long long;
#define IOS ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
using namespace std;

int main(){
    int n;
    double sum = 0;
    cin >> n;
    if (n <= 150)
        sum += n * 0.4463;
    else{
        sum += 150 * 0.4463;
        if (n <= 400)
            sum += (n - 150) * 0.4663;
        else{
            sum += 250 * 0.4663;
            sum += (n - 400) * 0.5663;
        }
    }
    printf("%.1f", sum);
    return 0;
}