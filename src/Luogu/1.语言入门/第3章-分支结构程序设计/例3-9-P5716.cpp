#include <bits/stdc++.h>
using namespace std;

int main()
{
    int y, m;
    cin >> y >> m;
    switch (m)
    {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        cout<<31<<endl; break;
    case 4: case 6: case 9: case 11:
        cout<<30<<endl; break;
    case 2:
        if((!(y % 4)  && y % 100 ) || !(y % 400))
            cout<<29<<endl;
        else
            cout<<28<<endl;
        break;
    default: break;
    }
    // if (m == 2)
    //     if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
    //         cout << 29;
    //     else
    //         cout << 28;
    // else if (m <= 7)
    //     if (m % 2 == 0)
    //         cout << 30;
    //     else
    //         cout << 31;
    // else
    //     if (m % 2 == 0)
    //         cout << 31;
    //     else
    //         cout << 30;
    return 0;
}