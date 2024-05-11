#include<bits/stdc++.h>
using namespace std;
const int N = 1e3 + 10;
#define endl '\n'
struct num {
    int val, res;
    // bool operator<(const num &u) const {
    //     if (res != u.res)return res > u.res;
    //     return val < u.val;
    // }
}nums[N];

bool cmp(const num &x,const num &y) {
    if (x.res == y.res) return x.val < y.val;
    return x.res > y.res;
}

int calc(int n) {
    int res = 0;
    while (n > 10) {
        int temp = n, prod = 1;
        while (temp) prod *= temp % 10, temp /= 10;
        n = prod, res++;
    }
    return res;
}

int main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int a, b, idx = 0;
    cin >> a >> b;
    for (int i = a;i <= b;i++) nums[idx].val = i, nums[idx++].res = calc(i);
    sort(nums, nums + idx, cmp); //指定比较规则用这个
    // sort(nums, nums + idx); //重载<运算符用这个
    cout << nums[0].res << '\n' << nums[0].val;
    for (int i = 1;i < idx && nums[i].res == nums[i - 1].res;i++) cout << ' ' << nums[i].val;
    return 0;
}