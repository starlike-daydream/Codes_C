#include<bits/stdc++.h>
using namespace std;
int yueshu(int);
int main() {
    int arr[50], count[50];
    for (int i = 0;i < 36;i++)
        cin >> arr[i];
    for (int i = 0;i < 36;i++) {
        count[i] = yueshu(arr[i]);
    }
    for (int i = 0;i < 36 - 1;i++) {
        for (int j = i + 1;j < 36;j++) {
            if (count[i] < count[j]) {
                int temp1 = count[i];
                count[i] = count[j];
                count[j] = temp1;
                int temp2 = arr[i];
                arr[i] = arr[j];
                arr[j] = temp2;
            }
        }
    }
    for (int i = 0;i < /* (int)(sizeof(arr)) / 4 */36;i++) {
        cout << arr[i] << ' ';
    }
    cout << endl;
    for (int i = 0;i < /* (int)(sizeof(count)) / 4 */36;i++) {
        cout << count[i] << ' ';
    }
    cout << endl;
    return 0;
}
int yueshu(int n) {
    int sum = 2;
    for (int i = 2;i < n;i++) {
        if (n % i == 0)
            sum++;
    }
    return sum;
}
/*
问题描述
　　对于以下这些数（6行，每行6个，共36个），请问约数个数最多的是哪个？（如果有多个，请回答出现最早的那个）
　　393353 901440 123481 850930 423154 240461
　　373746 232926 396677 486579 744860 468782
　　941389 777714 992588 343292 385198 876426
　　483857 241899 544851 647930 772403 109929
　　882745 372491 877710 340000 659788 658675
　　296521 491295 609764 718967 842000 670302
答案提交
　　这是一道结果填空的题，你只需要算出结果后提交即可。本题的结果为一个整数，在提交答案时只填写这个整数，填写多余的内容将无法得分。
*/
