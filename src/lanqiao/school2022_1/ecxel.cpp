#include<bits/stdc++.h>
using namespace std;

int main() {
    char arr[30];
    for (int i = 'A';i <= 'Z';i++)
        arr[i - 'A'] = char(i);
    // printf("%s",arr);
    string s = "";
    int x = 0, y = 0, z = 0;
    int index = 2022 - 26 - 26 * 26;
    for (int i = 1;i < index;i++) {
        z++;
        if (z == 26)
            y++, z = 0;
        if (y == 26)
            x++, y = 0;
    }
    cout<<z<<endl;
    s += arr[x];
    s += arr[y];
    s += arr[z];
    cout << s << endl;
    return 0;
}