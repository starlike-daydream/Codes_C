#include<bits/stdc++.h>
using namespace std;
char c[40][50];
void be2(int, int);
int main() {
    int count = 0;
    for (int i = 0;i < 30;i++)
        for (int j = 0;j < 40;j++) 
            cin >> c[i][j];
    // string s[30]="";
    be2(0, 0);
    for (int i = 0;i < 30;i++)
        for (int j = 0;j < 40;j++)
            if (c[i][j] == '2')
                count++;
    cout << count << endl;
    return 0;
}
void be2(int i, int j) {
    if (c[i][j] == '0') {
        c[i][j] = '2';
        // cout<<i<<" "<<j<<endl;
        if (!(i + 1 >= 30 || i + 1 < 0 || j >= 40 || j < 0 || c[i + 1][j] == '1' || c[i + 1][j] == '2'))
            be2(i + 1, j);
        if (!(i - 1 >= 30 || i - 1 < 0 || j >= 40 || j < 0 || c[i - 1][j] == '1' || c[i - 1][j] == '2'))
            be2(i - 1, j);
        if (!(i >= 30 || i < 0 || j - 1 >= 40 || j - 1 < 0 || c[i][j - 1] == '1' || c[i][j - 1] == '2'))
            be2(i, j - 1);
        if (!(i >= 30 || i < 0 || j + 1 >= 40 || j + 1 < 0 || c[i][j + 1] == '1' || c[i][j + 1] == '2'))
            be2(i, j + 1);
    }
}
/*
问题描述
小蓝有一个01矩阵。他打算将第一行第一列的 0 变为 2 。变化过程有传染性，每次 2 的上下左右四个相邻的位置中的 0 都会变成 2 。直到最后每个 2 的周围都是 1 或 2 结束。
请问，最终矩阵中有多少个 2 ？
以下是小蓝的矩阵，共 30 行 40 列。
0000100010000001101010101001001100000011
0101111001111101110111100000101010011111
1000010000011101010110000000001011010100
0110101010110000000101100100000101001001
0000011010100000111111001101100010101001
0110000110000000110100000000010010100011
0100110010000110000000100010000101110000
0010011010100110001111001101100110100010
1111000111101000001110010001001011101101
0011110100011000000001101001101110100001
0000000101011000010011111001010011011100
0000100000011001000100101000111011101100
0010110000001000001010100011000010100011
0110110000100011011010011010001101011011
0000100100000001010000101100000000000010
0011001000001000000010011001100101000110
1110101000011000000100011001001100111010
0000100100111000001101001000001010010001
0100010010000110100001100000110111110101
1000001001100010011001111101011001110001
0000000010100101000000111100110010101101
0010110101001100000100000010000010110011
0000011101001001000111011000100111010100
0010001100100000011000101011000000010101
1001111010010110011010101110000000101110
0110011101000010100001000101001001100010
1101000000010010011001000100110010000101
1001100010100010000100000101111111111100
1001011010101100001000000011000110110000
0011000100011000010111101000101110110001
答案提交
这是一道结果填空的题，你只需要算出结果后提交即可。本题的结果为一个整数，在提交答案时只填写这个整数，填写多余的内容将无法得分。
 */