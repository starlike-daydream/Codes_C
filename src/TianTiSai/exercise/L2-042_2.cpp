#include<bits/stdc++.h>
using namespace std;
queue<int> pin;
stack<int> box;
vector<int> branch;

int main() {
    int n, m, k, num;
    cin >> n >> m >> k >> num;
    branch.push_back(num);
    while (--n) {
        cin >> num;
        pin.push(num);
    }
    while (!pin.empty() || !box.empty()) {
        int last = branch.empty() ? 1001 : branch.back();
        if (!box.empty() && box.top() <= last) {
            branch.push_back(box.top());
            box.pop();
        }else if (!pin.empty() && pin.front() <= last) {
            branch.push_back(pin.front());
            pin.pop();
        }else if (!pin.empty()) {
            box.push(pin.front());
            pin.pop();
        }
        // cout<<"front:"<<(pin.empty()?-1:pin.front())<<'\n';
        // cout<<"top:"<<(box.empty()?-1:box.top())<<'\n';
        // cout<<"branch:";for(auto i:branch)cout<<i<<' ';cout<<'\n';
        if (box.size() == m || branch.size() == k || pin.empty()) {
            for (int i = 0;i < branch.size();i++) cout << branch[i] << (i == branch.size() - 1 ? '\n' : ' ');
            branch.clear();
        }
    }
}