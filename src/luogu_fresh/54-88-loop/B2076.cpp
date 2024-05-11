#include<bits/stdc++.h>
using namespace std;

int main() {
    //下降加回弹的思路
    //double h,sum=0;
    // cin>>h;
    // for (int i = 0; i < 10; i++){
    //     sum += h;//下降高度
    //     h /= 2;
    //     sum += h;//回弹高度
    // }
    // cout<<sum-h<<endl<<h;
    //回弹加下降的思路
    double h, sum = 0;
    cin >> h;
    double h1 = h;
    for (int i = 0; i < 10; i++) {
        h = h1 * pow(0.5, i);
        if (i == 0)
            sum += h;
        else
            sum += 2 * h;//除了第一次都会回弹加降落
    }
    cout << sum << endl << h/2;
}
// #include<stdio.h>//prinf所需头文件
// #include<math.h>//pow函数所需头文件

// int main() {//主函数，程序入口
//     double h, sum = 0;//小球高度和经过总路程
//     for (int i = 0; i < 10; i++) {//循环十次
//         h = 100 * pow(0.5, i);//高度每次*1/2，100->50->25->...
//         if (i == 0)//第一次直接降落不回弹
//             sum += h;//加一个高度
//         else//第2-10次
//             sum += 2 * h;//除了第一次都会回弹加降落，所以要两倍高度
//     }
//     printf("%.2f", sum);//打印小球经过总路程，保留两位小数
// }