#include<iostream>
#include<vector>
using namespace std;
struct TreeNode {
    int val;
    TreeNode* next;
    TreeNode(int x) :val(x), next(nullptr) {};
};
class LinkedListStack {
private:
    TreeNode* stackTop;
    int stkSize;
public:
    LinkedListStack() {
        stackTop = nullptr;
        stkSize = 0;
    }
    ~LinkedListStack() {
        // freeMemoryLinkedList(stackTop);
    }
    int size() {
        return stkSize;
    }
    void push(int x) {
        TreeNode* node = new TreeNode(x);
        node->next = stackTop;
        stackTop = node;
        stkSize++;
    }
    void pop() {
        int peek = top();
        TreeNode* node = stackTop;
        stackTop = node->next;
        delete node;
        stkSize--;
    }
    int top() {
        if (size() == 0)
            throw out_of_range("栈当前为空！");
        return stackTop->val;
    }
    bool empty() {
        return size() == 0;
    }
    vector<int> toVector() {
        TreeNode* node = stackTop;
        // vector<int> res;
        // for (int i = 0;i < size();i++, node = node->next)
            // res.push_back(node->val);// 这样只能从栈顶开始加
        vector<int> res(size());
        for (int i = size() - 1;i >= 0;i--) {
            res[i] = node->val;
            node = node->next;
        }
        return res;
    }
};
int main() {
    // LinkedListStack stack = new LinkedListStack();
    LinkedListStack stack;
    // stack.top();

    /* 元素入栈 */
    stack.push(1);
    stack.push(3);
    stack.push(2);
    stack.push(5);
    stack.push(4);

    /* 访问栈顶元素 */
    int top = stack.top();
    cout << top << endl;

    /* 元素出栈 */
    stack.pop(); // 无返回值

    /* 获取栈的长度 */
    int size = stack.size();
    cout << size << endl;

    /* 判断是否为空 */
    bool empty = stack.empty();
    cout << empty << endl;

    vector<int> vec = stack.toVector();
    for (int i = 0; i < vec.size(); i++)
        cout << vec[i] << ' ';

    return 0;
}