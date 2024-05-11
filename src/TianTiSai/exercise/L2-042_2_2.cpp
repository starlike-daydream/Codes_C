#include<bits/stdc++.h>
using namespace std;
queue<int> pin;
stack<int> box;
vector<int> branch;

int main() {
    int n, m, k, num;
    cin >> n >> m >> k;
    while (n--) {
        cin >> num;
        pin.push(num);
    }
    while (!pin.empty() || !box.empty()) {
        int last=branch.empty()?101:branch.back(),
            top=box.empty()?111:box.top(),
            front=pin.empty()?111:pin.front();
        if (last==101){
            if(top!=111){
                branch.push_back(top);
                box.pop();
            }else{
                branch.push_back(front);
                pin.pop();
            }
        }else 
        if(top <= last) {
            branch.push_back(top);
            box.pop();
        }else if (front <= last) {
            branch.push_back(front);
            pin.pop();
        }else {
            box.push(front);
            pin.pop();
        }
        if (box.size() == m&&(front>last||last==101)|| branch.size() == k || front==111&&(top>last||last==101)) {
            for (int i = 0;i < branch.size();i++) cout << branch[i] << (i == branch.size() - 1 ? '\n' : ' ');
            branch.clear();
        }
    }
    // for (int i = 0;i < branch.size();i++) cout << branch[i] << (i == branch.size() - 1 ? '\n' : ' ');
}