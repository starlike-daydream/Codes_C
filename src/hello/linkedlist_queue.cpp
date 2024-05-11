#include<iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* next;
    TreeNode(int x) :val(x), next(nullptr) {}
};
class LinkedListQueue {
private:
    TreeNode* front, * rear;
    int queueSize;
public:
    LinkedListQueue() {
        queueSize = 0;
        // front = nullptr;
        // rear = nullptr;
    }
    void push(int x) {
        TreeNode* newNode = new TreeNode(x);
        if (front == nullptr) {
            front = newNode;
            rear = newNode;
            // newNode->next = end;
        }
        else {
            rear->next = newNode;
            rear = newNode;
        }
        queueSize++;
    }
    void pop() {
        int peek_val = peek();
        front->next = front->next->next;
        // ListNode* node = front;
        // front = front->next;
        // delete node;
        queueSize--;
    }
    int peek() {
        if (empty())
            throw out_of_range("队列为空");
        return front->val;
    }
    int back() {
        if (empty())
            throw out_of_range("队列为空");
        return rear->val;
    }
    int size() {
        return queueSize;
    }
    bool empty() {
        return size() == 0;
    }
    void printQueue() {
        TreeNode* node = front;
        for (int i = 0;i < size();i++) {
            cout << node->val << (i == size() - 1 ? "\n" : "->");
            node = node->next;
        }
    }
};
int main() {
    LinkedListQueue queue;

    //元素入队
    queue.push(1);
    queue.push(1);
    queue.push(3);
    queue.push(5);
    queue.push(4);

    queue.printQueue();

    //访问队首元素
    int front_val = queue.peek();
    cout << front_val << endl;

    // 元素出队
    queue.pop();
    // queue.printQueue();
    // queue.pop();
    // queue.printQueue();
    // queue.pop();
    // queue.printQueue();
    // queue.pop();
    // queue.printQueue();
    // queue.pop();
    // queue.pop();
    // queue.printQueue();
    // return 0;

    //  获取队列的长度
    int size = queue.size();
    cout << size << endl;

    // 访问队尾元素
    int back = queue.back();
    cout << back << endl;

    // 判断队列是否为空
    bool empty = queue.empty();
    cout << empty << endl;

    return 0;
}