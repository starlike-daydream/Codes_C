#include <bits/stdc++.h>
using namespace std;

int main() {
    int v_a = 5, v_yao = 8, distance = 100;
    double delta,ans;
    delta = v_yao - v_a;
    ans =  distance / delta;
    // ans =  distance * 1.0 / (v_yao - v_a);
    // cout<<ans<<endl;
    printf("%f",ans);//习题2-3要求尝试改写cin/cout为scanf/printf
    return 0;
}