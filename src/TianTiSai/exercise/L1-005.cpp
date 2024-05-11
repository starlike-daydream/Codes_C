#include<bits/stdc++.h>
using namespace std;
struct Student{
    string exam;
    int seat;
    Student(string a, int b) :exam(a), seat(b) {};
    Student() {};
};
Student stus[1010];
int main() {
    int n, m, seat, que, pre;
    string exam;
    cin >> n;
    while(n--) {
        cin >> exam >> pre >> seat;
        stus[pre] = Student(exam,seat);
    }
    cin >> m;
    while (m--) {
        cin >> que;
        cout << stus[que].exam << ' ' << stus[que].seat << '\n';
    }
    return 0;
}