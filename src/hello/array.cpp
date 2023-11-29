#include<bits/stdc++.h>
using namespace std;

int randomAccess(int* nums, int size);//随机访问元素
void insert(int* nums, int size, int num, int index);//插入元素
void remove(int* nums, int size, int index);//删除元素
int find(int* nums, int size, int target);//查找元素
int *extend(int* nums, int size, int enlarge);//扩容数组

int main() {
    //储存在栈上
    int arr[5];
    int nums[]{ 1,3,2,5,4 };
    cout << randomAccess(nums, 5) << endl;
    insert(nums, 5, 6, 3);
    for (int i = 0;i < sizeof(nums) / 4;i++) {
        cout << nums[i] << ' ';
    }
    cout << endl;
    remove(nums, 5, 3);
    for (int i = 0;i < sizeof(nums) / 4;i++) {
        cout << nums[i] << ' ';
    }
    cout << endl;
    cout << find(nums, 4, 5) << endl;
    int* nums2 = extend(nums, 5, 5);
    for (int i = 0;i < 10;i++) {
        cout << *(nums2+i) << ' ';
    }
    cout << endl;
    //储存在堆上（需要手动释放内存）
    int* arr1 = new int[5];
    int* nums1 = new int[5] {1, 3, 2, 5, 4};
    return 0;
}

int randomAccess(int* nums, int size) {
    int randomIndex = rand() % size;
    int randomNum = nums[randomIndex];
    return randomNum;
}

void insert(int* nums, int size, int num, int index) {
    for (int i = size - 1;i > index;i--) {
        nums[i] = nums[i - 1];
    }
    nums[index] = num;
}

void remove(int* nums, int size, int index) {
    for (int i = index;i < size - 1;i++) {
        nums[i] = nums[i + 1];
    }
}

int find(int* nums, int size, int target) {
    for (int i = 0;i < size;i++) {
        if (nums[i] == target) {
            return i;
        }
    }
    return -1;
}

int *extend(int* nums, int size, int enlarge) {
    int *res = new int[size + enlarge];
    for (int i = 0;i < size;i++) {
        res[i] = nums[i];
    }
    delete[] nums;
    return res;
}