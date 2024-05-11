#include<iostream>
#include<ctime>
using namespace std;
#define ll long long
struct Node {
    int val;
    Node* next;
    Node(int x) :val(x), next(nullptr) {};
};
int size(Node* head) {
    int size = 0;
    for (Node* p = head;p != nullptr;p = p->next) size++;
    return size;
}
int size_recursion(Node* head) {
    if (head->next == nullptr) return 1;
    return size_recursion(head->next) + 1;
}

int main() {
    Node* node1 = new Node(1);
    Node* node2 = new Node(2);
    Node* node3 = new Node(3);
    Node* node4 = new Node(4);
    Node* node5 = new Node(5);
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    int i = 6;
    for (Node* node = node5;i <= 2.5e8;i++) {
        Node* new_node = new Node(i);
        node->next = new_node;
        node = new_node;
    }
    ll time0s = clock();
    cout << size(node1) << endl;
    ll time0e = clock();
    cout << (time0e - time0s) << endl;
    // ll time1s = clock();
    // cout << size_recursion(node1) << endl;
    // ll time1e = clock();
    // cout << (time1e - time1s) << endl;
}