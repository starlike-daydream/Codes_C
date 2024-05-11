#include<bits/stdc++.h>
using namespace std;
struct Node{//定义节点结构体
    int val,where;//值和深度
    Node *left,*right;//左右子节点
    Node(int x):val(x),where(1),left(nullptr),right(nullptr){};//初始化
};
int n,num1,num,depth=1,ans=0;//初始化节点个数，接收的数，树的深度，答案
void add(Node* tree,Node* node,int count){//添加节点方法
    if(node->val<=tree->val)//添加节点小于当前节点
        if(tree->left==nullptr){//左节点为空
            if(count>depth)//根据最大节点深度计算树的深度
                depth=count;
            node->where=count;//为节点深度赋值
            tree->left=node;//为当前节点的左节点添加节点
        }else //否则继续判断当前节点的左子节点，同时深度加一
            add(tree->left,node,count+1);
    else//与上同理不再赘述
        if(tree->right==nullptr){
            if(count>depth)
                depth=count;
            node->where=count;
            tree->right=node;
        }else
            add(tree->right,node,count+1);
}
void midOrder(Node* root){//找出深度为最后两层的节点,中序遍历
    // cout<<root->val<<' '<<root->where<<'\n';
    if(root->where==depth-1||root->where==depth)
        ans++;
    if(root->left!=nullptr)//左子树非空遍历左子节点
        midOrder(root->left);
    if(root->right!=nullptr)//左子树非空遍历左子节点
        midOrder(root->right);
}
signed main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    cin>>n>>num1;
    //第一个节点是根节点
    Node* root = new Node(num1);
    for(int i=0;i<n-1&&cin>>num;i++)//添加剩下的节点
        add(root,new Node(num),2);
    // cout<<depth<<'\n';
    midOrder(root);
    cout<<ans;
}