#include<iostream>
#include<vector>
using namespace std;
class ArrayStack {
private:
    vector<int> stack;
    // int stkSize;
public:
    // ArrayStack() {
        // stkSize = 0;
    // }
    void push(int x) {
        stack.push_back(x);
        // stkSize++;
    }
    void pop() {
        int oldTop = top();
        stack.pop_back();
        // stack.erase(stack.end() - 1);
        // stack.erase(stkSize - 1); error
        // stkSize--;
    }
    int top() {
        if (stack.empty()) 
            throw out_of_range("栈为空！");
        return stack.back();
    }
    bool empty() {
        return stack.empty();
    }
    int size() {
        return stack.size();
    }
};
int main() {
    ArrayStack stack;
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
    cout<<stack.top()<<endl;
    return 0;
}