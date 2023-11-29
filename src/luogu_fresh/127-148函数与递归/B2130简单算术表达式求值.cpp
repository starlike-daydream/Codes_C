#include<bits/stdc++.h>
using namespace std;

int main() {
    string s, n1 = "", n2 = "";
    cin >> s;
    char c;
    int index = 0;
    while (index < s.length() && 48 <= s[index] && s[index] <= 57) {
        n1 += s[index];
        index++;
    }
    while (s[index] == ' ')
        index++;
    c = s[index];
    index++;
    while (s[index] == ' ')
        index++;
    while (index < s.length() && '0' <= s[index] && s[index] <= '9') {
        n2 += s[index];
        index++;
    }
    int a = stoi(n1);
    int b = stoi(n2);
    switch (c) {
    case '+':
        cout << a + b;
        break;
    case '-':
        cout << a - b;
        break;
    case '*':
        cout << a * b;
        break;
    case '/':
        cout << a / b;
        break;
    case '%':
        cout << a % b;
        break;
    }
    return 0;
}