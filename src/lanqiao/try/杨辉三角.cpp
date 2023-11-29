#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll arr1[100000000],arr2[100000000];
int main(){
    ll n, index = 1;
    cin >> n;
    for (ll len = 1;; len++){ // 单个数组长度
        for (ll i = 1; i <= len; i++){ // 单个数组赋值
            if (i == 1 || i == len)
                if(len%2==0)
                    arr2[i] = 1;
                else
                    arr1[i] = 1;
            else
                if(len%2==0)
                    arr2[i] = arr1[i] + arr1[i-1];
                else
                    arr1[i] = arr2[i] + arr2[i-1];
            if(len%2==0)
                // cout<<i<<" "<<arr2[i]<<endl;
                cout<<arr2[i]<<' ';
            else
                cout<<arr1[i]<<' ';
            if (arr1[i]==n||arr2[i] == n){
                cout << index;
                return 0;
            }
            index++;
        }
    cout<<endl;
    }
    return 0;
}
// int arr1[1000000],arr2[1000000];
// int main(){
//     int n, index = 1;
//     cin >> n;
//     for (int len = 1;; len++) // 单个数组长度
//         if(len%2==0){
//             for (int i = 1; i <= len; i++){ // 单个数组赋值
//                 if (i == 1 || i == len)
//                     arr2[i] = 1;
//                 else{
//                     arr2[i] = arr1[i] + arr1[i-1];
//                 }
//                 // cout<<i<<" "<<arr2[i]<<endl;
//                 if (arr2[i] == n){
//                     cout << index;
//                     return 0;
//                 }
//                 index++;
//             }
//         }else{
//             for (int i = 1; i <= len; i++){ // 单个数组赋值
//                 if (i == 1 || i == len)
//                     arr1[i] = 1;
//                 else{
//                     arr1[i] = arr2[i] + arr2[i-1];
//                 }
//                 // cout<<i<<" "<<arr1[i]<<endl;
//                 if (arr1[i] == n){
//                     cout << index;
//                     return 0;
//                 }
//                 index++;
//             }
//         }
//     return 0;
// }
// }using namespace std;
// int arr[10000000];
// int main(){
//     int n, index = 1;
//     cin >> n;
//     for (int len = 1;; len++) // 单个数组长度
//         for (int i = 1; i <= len; i++){ // 单个数组赋值
//             if (i == 1 || i == len)
//                 arr[index] = 1;
//             else
//                 arr[index] = arr[index - len] + arr[index - len + 1];
//             if (arr[index] == n){
//                 cout << index;
//                 return 0;
//             }
//             index++;
//         }
//     return 0;
// }
//  1
// 1  1
// 1 2  1
// 1 3 3 1