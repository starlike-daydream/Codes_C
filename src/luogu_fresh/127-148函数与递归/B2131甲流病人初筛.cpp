#include <bits/stdc++.h>
using namespace std;
int n, sum;
double tem;
string name;
bool cough, is_patient(double, bool);
int main(){
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> name >> tem >> cough;
        if (is_patient(tem, cough)){
            cout << name << endl;
            sum++;
        }
    }
    cout << sum;
    return 0;
}

bool is_patient(double tem, bool cough){
    if (tem >= 37.5 && cough)
        return 1;
    return 0;
}