#include<iostream>
// #include"../OI-wiki/recursion_divide/easy_recursion.h"
using namespace std;

struct TreeNode {
    int val;//节点值
    TreeNode* next;//指向下一个节点的指针
    TreeNode(int x) :val(x), next(nullptr) {}//构造函数
};
void insert(TreeNode*, TreeNode*);
void remove(TreeNode*);
TreeNode* access(TreeNode*, int);
int find(TreeNode*, int);
int main() {
    //初始化链表 1->3->2->5->4
    //初始化各个节点
    TreeNode* n0 = new TreeNode(1);
    TreeNode* n1 = new TreeNode(3);
    TreeNode* n2 = new TreeNode(2);
    TreeNode* n3 = new TreeNode(5);
    TreeNode* n4 = new TreeNode(4);
    // 构建引用指向
    n0->next = n1;
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    insert(n0, new TreeNode(8));
    cout << access(n1, 1)->val << endl;
    remove(n1);
    for (TreeNode* i = n0;i != nullptr;i = i->next) {
        cout << i->val << ' ';
    }
    cout << endl;
    cout << find(n0, 4) << endl;
    // cout<<get_size(n0)<<endl;
    return 0;
}

// 在链表的结点n0之后插入节点P
void insert(TreeNode* n0, TreeNode* P) {
    // P->next = n0->next;
    TreeNode* n1 = n0->next;
    P->next = n1;
    n0->next = P;
}

// 删除链表节点n0之后的首个节点
void remove(TreeNode* n0) {
    // ListNode* n1 = n0->next->next;
    // n0->next=n1;
    if (n0->next == nullptr)
        return;
    // * n0 -> p -> n1
    TreeNode* P = n0->next;
    TreeNode* n1 = P->next;
    n0->next = n1;
    // 释放内存
    delete P;
}

// 访问链表中索引为index的节点
TreeNode* access(TreeNode* head, int index) {
    for (int i = 0;i < index;i++) {
        if (head == nullptr)
            return nullptr;
        head = head->next;
    }
    return head;
}

//在链表中查找值为target的首个节点
int find(TreeNode* head, int target) {
    int index = 0;
    while (head != nullptr) {
        if (head->val == target)
            return index;
        head = head->next;
        index++;
    }
    return -1;
}
