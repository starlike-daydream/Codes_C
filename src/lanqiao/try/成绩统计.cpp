#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, pass = 0, great = 0, score;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> score;
        if (score >= 60){
            pass++;
            if (score >= 85)
                great++;
        }
    }
    printf("%d\%\n%d", int(pass * 100.0 / n + 0.5), int(great * 100.0 / n + 0.5));
    printf("%%");
    return 0;
}