#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;//节点值
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) :val(x), left(nullptr), right(nullptr) {}
};

vector<int> vec;
vector<int> levelNode(TreeNode* root);
void preOrder(TreeNode* root) {
    if (root == nullptr)
        return;
    vec.push_back(root->val);
    preOrder(root->left);
    preOrder(root->right);
}

int main() {
    TreeNode* n1 = new TreeNode(1);
    TreeNode* n2 = new TreeNode(2);
    TreeNode* n3 = new TreeNode(3);
    TreeNode* n4 = new TreeNode(4);
    TreeNode* n5 = new TreeNode(5);
    n1->left = n2;
    n1->right = n3;
    n2->left = n4;
    n2->right = n5;
    preOrder(n1);
    for (auto i : vec){
        cout<<i<<" ";
    }
    return 0;
}