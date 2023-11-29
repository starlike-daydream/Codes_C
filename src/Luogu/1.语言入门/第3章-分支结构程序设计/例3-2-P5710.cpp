#include <iostream>
using namespace std;
int main()
{
    int x;
    bool p1, p2;
    cin >> x;
    p1 = !(x % 2);
    p2 = x > 4 && x <= 12;
    cout << (p1 && p2) << ' ';
    cout << (p1 || p2) << ' ';
    cout << (p1 ^ p2) << ' ';
    cout << (!p1 && !p2) << ' ';
    // cout<<!(p1||p2)<<' ';
    return 0;
    // int x;
    // cin >> x;
    // bool flag1 = x % 2 == 0;
    // bool flag2 = x > 4 && x <= 12;
    // if (flag1 && flag2)
    //     cout << 1 << " ";
    // else
    //     cout << 0 << " ";
    // if (flag1 || flag2)
    //     cout << 1 << " ";
    // else
    //     cout << 0 << " ";
    // // if ((flag1&&!flag2)||(!flag1&&flag2))
    // if (flag1 ^ flag2)
    //     cout << 1 << " ";
    // else
    //     cout << 0 << " ";
    // // if (!flag1&&!flag2)
    // if(!(flag1||flag2))
    //     cout << 1 << " ";
    // else
    //     cout << 0 << " ";
    return 0;
}