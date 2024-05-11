#include<iostream>
using namespace std;
class MyArrayQueue {
private:
    int* rear;
    int* arr;
    int queSize;
    int maxSize;
public:
    MyArrayQueue() {
        arr = (int*)malloc(sizeof(int) * 10);
        // rear = nullptr;
        queSize = 0;
        maxSize = 10;
    }
    void push(int x) {
        if (queSize == maxSize) {
            maxSize *= 1.5;
            arr = (int*)realloc(arr, sizeof(int) * maxSize);
        }
        else if (queSize == 0) {
            rear = arr;
        }
        *rear = x;
        rear++;
        queSize++;
    }
    int size() {
        return queSize;
    }
    bool empty() {
        return queSize == 0;
    }
    int peek() {
        if (empty())
            throw out_of_range("队列为空");
        return *arr;
    }
    int back() {
        if (empty())
            throw out_of_range("队列为空");
        return *(rear - 1);
    }
    void pop() {
        int top = peek();
        for (int i = 0;i < queSize - 1;i++)
            *(arr + i) = *(arr + i + 1);
        queSize--;
        rear--;
    }
    void printQueue() {
        for (int i = 0;i < queSize;i++)
            cout << *(arr + i) << (i == queSize - 1 ? '\n' : ' ');
    }
};
int capacity = 10;
class ArrayQueue {
private:
    int* arr;
    int front;
    int queCapacity;
    int queSize;
public:
    ArrayQueue() {
        arr = new int[capacity];
        queCapacity = capacity;
        front = 0;
        queSize = 0;
    }
    void push(int x) {
        if (queSize == queCapacity)
            throw out_of_range("栈已满");
        int rear = (queSize + front) % queCapacity;
        queSize++;
        arr[rear] = x;
    }
    int size() {
        return queSize;
    }
    bool empty() {
        return size() == 0;
    }
    int peek() {
        if (empty())
            throw out_of_range("栈为空");
        return arr[front];
    }
    void pop() {
        int first = peek();
        front++;
        queSize--;
    }

};
int main() {

    ArrayQueue queue;

    // queue.pop();

    //元素入队
    queue.push(1);
    queue.push(2);
    queue.push(3);
    queue.push(5);
    queue.push(9);
    // queue.push(8);
    // queue.push(6);
    // queue.push(2);
    // queue.push(7);
    // queue.push(4);
    // queue.push(10);
    // queue.push(666);
    //  queue.push(4);

    //访问队首元素
    int front = queue.peek();
    cout << front << endl;

    // 元素出队
    queue.pop();

    front = queue.peek();
    cout << front << endl;

    //  获取队列的长度
    int size = queue.size();
    cout << size << endl;

    // 访问队尾元素
    // int back = queue.back();
    // cout << back << endl;

    // 判断队列是否为空
    bool empty = queue.empty();
    cout << empty << endl;

    // queue.printQueue();

    return 0;
}