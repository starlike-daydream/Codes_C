#include<stdio.h>

/**
 * @brief 判断数组中是否需要进行移动操作
 * @param n 数组长度
 * @return 1表示不需要移动，0表示需要移动
 */
int is_ok(int n);

// 定义全局变量
int a[55]; ///< 存储数组
int not_null_start, middle0_first, closet_null, last_not_null; ///< 辅助变量，表示非0元素起始位置、第一个0的位置、最后一个0的位置、最后一个非0的位置

int main() {
    int n;
    scanf("%d", &n); // 读取测试用例数量
    while (n--) {
        int t;
        scanf("%d", &t); // 读取数组长度
        int count = 0;
        for (int i = 1; i <= t; i++) {
            scanf("%d", a + i); // 读取数组元素
        }
        
        // 当数组需要移动时进行操作
        while (!is_ok(t)) {
            count++; // 移动次数加1
            a[closet_null] = a[last_not_null]; // 移动非0元素
            a[last_not_null] = 0; // 最后一个非0元素位置置为0
        }
        printf("%d\n", count); // 输出移动次数
    }
    return 0;
}

/**
 * @brief 判断数组中是否需要进行移动操作
 * @param n 数组长度
 * @return 1表示不需要移动，0表示需要移动
 */
int is_ok(int n) {
    not_null_start = 0; // 非0元素起始位置初始化
    middle0_first = 0; // 第一个0的位置初始化
    closet_null = 0; // 最后一个0的位置初始化
    last_not_null = 0; // 最后一个非0的位置初始化
    for (int i = 1; i <= n; i++) {
        if (a[i] != 0 && not_null_start == 0) {
            not_null_start = i; // 记录非0元素起始位置
        }
        if (not_null_start != 0 && a[i] == 0 && middle0_first == 0) {
            middle0_first = i; // 记录第一个0的位置
        }
        if (middle0_first != 0 && a[i] != 0) {
            while (i <= n) {
                if (a[i] != 0) last_not_null = i; // 找到最后一个非0的位置
                i++;
            }
            i = last_not_null;
            while (i >= 1) {
                if (a[i] == 0) {
                    closet_null = i; // 找到最后一个0的位置
                    break;
                }
                i--;
            }
            return 0; // 需要移动
        }
    }
    return 1; // 不需要移动
}