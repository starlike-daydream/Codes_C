#include <iostream>
using namespace std;

int main(){
    char opt;
    cin >> opt;
    switch (opt){
    case 'G': cout << "Hello, my Master!" << endl; break;
    case 'N': cout << "I'm Xiaoluo." << endl; break;
    case 'S': cout << "Teinei teinei tenei~" << endl; break;
    case 'B': case 'Q':
        cout << "Bye bye!" << endl; break;
    default: cout << "sorry.." << endl; break;
    }
    return 0;
}