#include <bits/stdc++.h>
using namespace std;
bool equal_y_md(int, int, int);
int maxday(int, int);

int main() {
    int count = 0;
    int year = 1900;
    int month = 1;
    int day = 1;
    while (year <= 9999 && month <= 12 && day <= 31) {
        day++;
        if (day == maxday(year, month) + 1) {//!
            day = 1, month++;
            if (month == 13)//!
                month = 1, year++;
        }
        if (equal_y_md(year, month, day))
            count++;
    }
    cout << count;
    return 0;
}

bool equal_y_md(int x, int y, int z) {
    int x1=x/1000%10;
    int x2=x/100%10;
    int x3=x/10%10;
    int x4=x%10;
    int y1=y/10%10;
    int y2=y%10;
    int z1=z/10%10;
    int z2=z%10;
    if(x1+x2+x3+x4==y1+y2+z1+z2)
        return 1;
    return 0;
}

int maxday(int year, int month) {
    if (month == 2)
        if (year % 400 == 0 || year % 100 != 0 && year % 4 == 0)
            return 29;
        else
            return 28;
    if (month <= 7)         // 1-7
        if (month % 2 == 0) // 4,6
            return 30;
        else // 1,3,5,7
            return 31;
    else                    // 8-12
        if (month % 2 == 0) // 8,10,12
            return 31;
        else // 9,11
            return 30;
}