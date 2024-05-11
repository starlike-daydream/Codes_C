#include<iostream>
using namespace std;
struct node{
    int val;
    node *left,*right;
    node(int x):val(x),left(nullptr),right(nullptr){};
};
void add(node* n,node* a){
    if(a->val>=n->val)
        if(n->right==nullptr) n->right=a;
        else add(n->right,a);
    else
        if(n->left==nullptr) n->left=a;
        else add(n->left,a);
}
string get="",ans1="",ans2="",back_s="";
void preOrder(node* n){
    ans1+=to_string(n->val)+" ";
    if(n->left!=nullptr) preOrder(n->left);
    if(n->right!=nullptr) preOrder(n->right);
}
void backOrder(node* n){
    if(n->left!=nullptr) backOrder(n->left);
    if(n->right!=nullptr) backOrder(n->right);
    back_s+=to_string(n->val)+" ";
}
void preOrderFall(node* n) {
    ans2+=to_string(n->val)+" ";
    if(n->left!=nullptr) preOrderFall(n->left);
    if(n->right!=nullptr) preOrderFall(n->right);
}
void change(node* n){
    node* temp = n->left;
    n->left=n->right;
    n->right=temp;
}
void fall(node *n){
    if(n->left!=nullptr) fall(n->left);
    change(n);
    if(n->right!=nullptr) fall(n->right);
}
int pre[1010];
int main(){
    int n;
    cin>>n;
    for (int i = 1;i <= n;i++) {
        cin >> pre[i];
        get+=to_string(pre[i])+" ";
    }
    int i = 1, root_val1 = pre[i++];
    while(pre[i]<root_val1) i++;
    int back1=i;
    while(pre[i]>=root_val1) i++;
    int len1 =i;
    i = 1;
    cout<<i<<endl;
    int root_val2 = pre[i++];
    while(pre[i]>=root_val2) i++;
    int back2=i;
    while(pre[i]<root_val2&&pre[i]!=0) i++;
    int len2 =i;
    cout<<i<<endl;
    node* root = new node(pre[1]);
    if(len1==n+1){
        node* root_left = new node(pre[2]);
        node* root_right = new node(pre[back1]);
        root->left = root_left, root->right = root_right;
        for (i = 3;i < back1;i++) add(root_left,new node(pre[i]));
        for(i=back1+1;i<=n;i++) add(root_right,new node(pre[i]));
        preOrder(root);
    }else if(len2==n+1){
        node* root_left = new node(pre[2]);
        node* root_right = new node(pre[back2]);
        root->left = root_left, root->right = root_right;
        for(i = 3;i < back2;i++) add(root_left,new node(pre[i]));
        for(i=back2+1;i<=n;i++) add(root_right,new node(pre[i]));
        fall(root->left);
        fall(root->right);
        preOrderFall(root);
    }else{
        cout<<"NO";
        return 0;
    }
    backOrder(root);
    // cout<<get<<'\n'<<ans1<<'\n'<<ans2<<'\n';
    back_s.erase(back_s.size() - 1, 1);
    // if (get == ans1 || get == ans2)
        cout << "YES\n" << back_s;
    // else cout << "NO";
    return 0;
}