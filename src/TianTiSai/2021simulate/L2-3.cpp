#include<iostream>
using namespace std;
struct node {
    int val;
    node* left, * right;
    node(int x) :val(x), left(nullptr), right(nullptr) {};
};
void add(node* n, node* a) {
    if (a->val >= n->val)
        if (n->right == nullptr) n->right = a;
        else add(n->right, a);
    else
        if (n->left == nullptr) n->left = a;
        else add(n->left, a);
}
string get = "", ans1 = "", ans2 = "", back_s = "";
void preOrder(node* n) {
    ans1 += to_string(n->val) + " ";
    if (n->left != nullptr) preOrder(n->left);
    if (n->right != nullptr) preOrder(n->right);
}
void backOrder(node* n) {
    if (n->left != nullptr) backOrder(n->left);
    if (n->right != nullptr) backOrder(n->right);
    back_s += to_string(n->val) + " ";
}
void preOrderFall(node* n) {
    ans2 += to_string(n->val) + " ";
    if (n->left != nullptr) preOrderFall(n->left);
    if (n->right != nullptr) preOrderFall(n->right);
}
void change(node* n) {
    node* temp = n->left;
    n->left = n->right;
    n->right = temp;
}
void fall(node* n) {
    change(n);
    if (n->left != nullptr) fall(n->left);
    if (n->right != nullptr) fall(n->right);
}
// int main(){
//     int n,num;
//     cin>>n>>num;
    // get+=to_string(num)+" ";
//     node* root=new node(num);
//     while(--n){
//         cin>>num;
//         get+=to_string(num)+" ";
//         add(root,new node(num));
//     }
//     preOrder(root);
//     fall(root);
//     // preOrderFall(root);
//     cout<<get<<'\n'<<ans1<<'\n';
//     cout<<ans2<<'\n';
//     if(get==ans1||ans2==get){
//         cout<<"YES";
//     }else cout<<"NO";
//     return 0;
// }
int pre[1010];
int main() {
    int n,back;
    cin >> n;
    for (int i = 1;i <= n;i++) {
        cin >> pre[i];
        get += to_string(pre[i]) + " ";
    }
    int i = 1, root_val = pre[i++];
    while (pre[i] < root_val) i++;
    int back1 = i;
    while (pre[i] >= root_val) i++;
    int len1 = i;
    i = 1;int root_val2 = pre[i++];
    while (pre[i] >= root_val2) i++;
    int back2 = i;
    while (pre[i] < root_val2) i++;
    int len2 = i;
    node* root = new node(pre[1]);
    node* root_left;
    node* root_right;
    if (len1 == n + 1) {
        back = back1;
        root_left = new node(pre[2]);
        root_right = new node(pre[back]);
    }else if (len2 == n + 1) {
        back = back1;
        root_left = new node(pre[back]);
        root_right = new node(pre[2]);
    }else {
        cout << "NO";
        return 0;
    }
    root->left = root_left, root->right = root_right;
    for (i = 3;i < back;i++) {
        add(root_left, new node(pre[i]));
    }
    for (i = back + 1;i <= n;i++) {
        add(root_right, new node(pre[i]));
    }
    preOrder(root);
    backOrder(root);
    // fall(root);
    // preOrderFall(root);
    back_s.erase(back_s.size() - 1, 1);
    // cout<<ans2<<'\n';
    // cout << get << '\n' << ans1 << '\n' << ans2 << '\n';
    // if (get == ans1 || get == ans2) {
        cout << "YES\n" << back_s;
    // }
    // else {
        // cout << "NO";
    // }
    // cout << back1;
    return 0;
}