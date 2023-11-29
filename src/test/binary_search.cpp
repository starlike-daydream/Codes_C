#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {11, 22, 33, 44, 55, 66, 77, 88, 99};
    int min = 0;
    int find;
    cin >> find;
    int max = sizeof(arr) / 4;
    int mid = 0;
    cout << min << ' ' << mid << ' ' << max << endl;
    while (1)
    {
        mid = (min + max) / 2;
        if (find > arr[mid])
        {
            min = mid + 1;
        }
        else if (find == arr[mid])
        {
            cout << mid + 1;
            break;
        }
        else
        {
            max = mid - 1;
        }
        cout << min << ' ' << mid << ' ' << max << endl;
        if (min > max)
        {
            cout << -1;
            break;
        }
    }
    return 0;
}
// 写一个二分查找到第一个的的函数
int binary_search(int arr[], int find, int min, int max)
{
    int mid = 0;
    while (1)
    {
        mid = (min + max) / 2;
        if (find > arr[mid])
        {
            min = mid + 1;
            if (min > max)
            {
                return -1;
            }
        }
        else if (find == arr[mid])
        {
            return mid;
            break;
        }
        else
        {
            max = mid - 1;
            if (min > max)
            {
                return -1;
            }
        }
        cout << min << ' ' << mid << ' ' << max << endl;
        if (min > max)
        {
            return -1;
        }
    }
    return -1;
// return mid;
    // return mid;
}
