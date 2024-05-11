#include<iostream>
#include<vector>
using namespace std;
int main() {
    vector<int> list1;
    vector<int> list = { 1,2,3,4,5 };
    int num = list[1];
    cout << num<<endl;
    list[1] = 0;
    list.clear();
    list.push_back(1);
    list.push_back(3);
    list.push_back(2);
    list.push_back(5);
    list.push_back(4);
    // list.erase(list.begin());
    list.erase(list.begin()+1);
    list.insert(list.begin() + 3, 6);
    int count = 0;
    for (int i = 0;i < list.size();i++) {
        count++;
        cout << list[i] << ' ';
    }
    cout<<endl;
    for (int n : list) {
        cout << n << ' ';
    }
    cout << endl;
    cout<<list.back()<<endl;
}