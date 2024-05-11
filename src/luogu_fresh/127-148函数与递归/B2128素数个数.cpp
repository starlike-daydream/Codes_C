#include <bits/stdc++.h>
using namespace std;
int arr[30];
int main() {
  s s;
  cin >> s;
  for (int i = 0;i < s.size();i++) {
    arr[s[i] - 'a']++;
  }
  int max = arr[0];
  for (int i = 0;i < 26;i++) {
    if (max < arr[i])
      max = arr[i];
  }
  for (int i = 0;i < s.size();i++)
    if (max == arr[s[i] - 'a']) {
      cout << s[i] << endl << max;
      return 0;
    }
  return 0;
}