#include<iostream>
using namespace std;
// int nums[110], num, n = 1;
// int main() {
//     while (1) {
//         cin >> num;
//         if (num == 0)
//             break;
//         nums[n++] = num;
//     }
//     while(--n)
//         cout << nums[n] << " ";
//     return 0;
// }
int main() {
    int nums[110], i = 0;
    do {
        cin >> nums[++i];
    } while (nums[i] != 0);
    while (--i)
        cout << nums[i] << ' ';
}