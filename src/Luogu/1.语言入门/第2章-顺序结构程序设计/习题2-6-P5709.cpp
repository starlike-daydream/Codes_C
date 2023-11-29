#include <bits/stdc++.h>
using namespace std;

int main(){
    int m, t, s, ans;
    cin >> m >> t >> s;
    if(t == 0){//吃的速度可能等于0
        cout<<0;
        return 0;
    }
    ans = m - ceil(s * 1.0 / t);//除0会报错,并且要是完整的苹果（这里计算吃过的苹果）
    // ans = abs(m - ceil(s * 1.0 / t));//abs函数
    if (ans < 0) // 陷阱：可能时间很久已经吃完了，但不可能剩下负数个苹果。
        ans = 0;
    cout << ans << endl;
    return 0;
}