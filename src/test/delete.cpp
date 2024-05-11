#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;

int main(int argc, const char** argv) {
    vector<string> v{ "1","2","3","4","5" };
    // remove(v.begin(), v.end(), "1");
    v.erase(remove(v.begin(), v.end(), "1"),v.end());
    for (auto i : v) cout << i << ' ';cout << '\n';
    v.shrink_to_fit();
    cout << v.size();
    return 0;
}