#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if ((5 * n) < (11 + 3 * n)){
        cout << "Local" << endl;
    }
    else{
        cout << "Luogu" << endl;
    }
    // int local = 5 * n;
    // int luogu = 11 + 3 * n;
    // if (local < luogu){
    //     cout<<"Local";
    // }else{
    //     cout<<"Luogu";
    // }
    return 0;
}