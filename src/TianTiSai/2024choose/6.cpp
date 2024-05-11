#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    string t, t0;
    cin >> n >> m;
    getchar();
    while (n--) {
        getline(cin, t);
        if (t.find("qiandao") != -1 || t.find("easy") != -1) ;
        else 
            t0 = t,m--;
    }
    if (m >= 0)
        cout << "Wo AK le" << endl;
    else
        cout << t0 << endl;
    return 0;
}