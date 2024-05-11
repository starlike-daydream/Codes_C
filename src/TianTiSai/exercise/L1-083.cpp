#include<bits/stdc++.h>
using namespace std;

int main() {
    int ban, company, age1, age2;
    cin >> ban >> company >> age1 >> age2;
    cout << age1 << "-" << (age1 >= ban || age2 >= company ? "Y " : "N ");
    cout << age2 << "-" << (age2 >= ban || age1 >= company ? "Y\n" : "N\n");
    if (age1 < ban)
        if (age2 < ban)
            cout << "zhang da zai lai ba";
        else if (age2 >= company)
            cout << "qing 2 zhao gu hao 1";
        else
            cout << "2: huan ying ru guan";
    else if (age2 < ban)
        if (age1 < ban)
            cout << "zhang da zai lai ba";
        else if (age1 >= company)
            cout << "qing 1 zhao gu hao 2";
        else
            cout << "1: huan ying ru guan";
    else
        cout << "huan ying ru guan";
    return 0;
}