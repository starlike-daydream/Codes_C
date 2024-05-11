#include<bits/stdc++.h>
using namespace std;
vector<int> nums;

int main() {
    int a1, a2, n;
    cin >> a1 >> a2 >> n;
    // cout << a1 << ' ' << a2 << ' ';
    // nums[1] = a1, nums[2] = a2;
    nums.push_back(a1);
    nums.push_back(a2);
    int n1 = n;
    for (int i = 0, res;n >= 0;i++) {
        // cout << "i:" << i << ' ';
        if ((res = nums[i] * nums[i + 1]) >= 10) {
            nums.push_back(res / 10);
            nums.push_back(res % 10);
            // cout << (nums[i + 2] = res / 10) << ' ';
            // nums[i + 2] = res / 10;
            // nums[i + 3] = res % 10;
            // cout << (nums[i + 3] = res % 10) << ' ';
            n -= 2;
        }
        else {
            // cout << (nums[i] * nums[i + 1]) << ' ';
            nums.push_back(nums[i] * nums[i + 1]);
            n--;
        }
    }
    for (int i = 0;i < n1;i++)
        cout << nums[i] << (i == n1 - 1?"" : " ");
    return 0;
}