// #include<bits/stdc++.h>
// using namespace std;
// struct TreeNode {
//     int val;
//     TreeNode* left;
//     TreeNode* right;
//     TreeNode(int x) :val(x), left(nullptr), right(nullptr) {};
//     TreeNode() {};
// };
// TreeNode* tree[1050][1050];
// vector<int> vec;
// void bfs(TreeNode*);
// int dfs(TreeNode*);
// int main() {
//     int n, num;
//     cin >> n;
//     TreeNode* node;
//     TreeNode* root;
//     for (int i = 1;i <= n;i++) {
//         for (int j = 1;j <= i;j++) {
//             cin >> num;
//             node = new TreeNode(num);
//             if (j < i) {
//                 tree[i-1][j]->left = node;
//             }
//             if (j > 1) {
//                 tree[i-1][j - 1]->right = node;
//             }
//             tree[i][j] = node;
//             if (i == 1 && j == 1)
//                 root = node;
//         }
//     }
//     // cout << root->right->val << endl;
//     // bfs(root);
//     dfs(root);
//     sort(vec.begin(), vec.end());
//     cout<<vec.back()<<endl;
//     return 0;
// }
// int dfs(TreeNode* node) {
//     int sum = node->val;
//     // cout << sum << ' ';
//     // if(node->left==nullptr)
//     if (node->left == nullptr && node->right == nullptr) {
//         vec.push_back(sum);
//     }
//     if (node->left != nullptr || node->right != nullptr)
//         return  sum + dfs(node->left) + dfs(node->right);
//     return sum;
// }
// void bfs(TreeNode* node) {
//     queue<TreeNode*> queue;
//     queue.push(node);
//     TreeNode* now;
//     int i = 1, j = 2;
//     while (!queue.empty()) {
//         now = queue.front();
//         queue.pop();
//         cout << now->val << ' ';
//         i++;
//         if (i == j) {
//             cout << '\n';
//             i = 1, j++;
//         }
//         if (now->left != nullptr)
//             queue.push(now->left);
//         if (now->right != nullptr)
//             queue.push(now->right);
//     }
// }