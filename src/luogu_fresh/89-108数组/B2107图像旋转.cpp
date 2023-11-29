#include <bits/stdc++.h>
using namespace std;
int n, m, arr[105][105];
// 观察题目示例代码，可以发现，旋转后的矩阵行列颠倒，且列元素逆序排序
// 3 3
// 1 2 3
// 4 5 6
// 7 8 9
//转换后
// 7 4 1
// 8 5 2
// 9 6 3

//先循环先确定内层循环，再确定外层循环，
//通过旋转后图像下标[i][j]找下规律，以此确定循环条件
//[2][0] [1][0] [0][0]
//[2][1] [1][1] [0][1]
//[2][2] [1][2] [0][2]
//通过观察可以看出内层是i:2->1->0,外层是j:0->1->2,输出[i][j]即可
//原先的n行m列换为m行n列输出
int main(){
    cin >> n >> m;//行数，列数
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> arr[i][j];
    for (int j = 0; j < m; j++){
        for (int i = n-1; i >= 0; i--)
            cout << arr[i][j] << " ";
        cout << endl;
    }
    return 0;
}

//这从发现颠倒行和列的内外循环顺序，就可以实现先打印列再打印行了，方法多种多样，我这只是其中一种