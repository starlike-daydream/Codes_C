#include<bits/stdc++.h>
using namespace std;
using ll = long long;//C++11写法
//typedef ll long long;
//#define int long long 主方法返回值要改为signed（signed=signed int =int）
//1.确定N的大小（要开数组），不要用define
// #define N 1e5+10 
//宏定义->纯字符串替换->可能出错
//cout<<N*2<<' '<<2*N<<'\n';答案将不同
//写成
// #define N (1e5+10)
//才行
//用常量定义N也不容易出错
const int N = 1e5 + 10;
// 2.开数组，全局变量自动初始化为0
int a[N];
int main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    //1.scanf 和 prinf
    //格式化输入输出
    //时间input 15:20 scanf("%d:%d",&a,&b);
    //output 1.00002 printf("%.5f",x);
    //不能取消同步流，否则会发生错误

    //2.cin cout
    //简洁，在取消同步流的情况下，一般会比scanf更快
    //取消同步流就会把要输出的数据放到缓冲区中，最后在一次性输出，更快，不取消就是直接一个数据接着一个输出

    //注意不要使用cout<<endl;改用cout<<'\n';
    //endl:'\n',强制刷新缓冲区（慢）（交互题会好用，但5%概率会遇到）

    //一般建议取消同步流，否则cin cout很慢，

    //快读只读数字

    // cout << N * 2 << ' ' << 2 * N << '\n';
    //方法里用的是栈空间（2M，4M）,比较小，具体和编译器有关，1e7就不够了，且不会初始化
    // int b[N];
    // for (int i = 0;i < 10;++i) 
    // {
    //     cout << a[i] << ' ' << b[i] << '\n';
    // }

    //建议输入只做输入这一件事，一会做IO一会做计算反而会慢一些
    //√：这样就会只调用IO单元
    //for(int i = 1;1<=n;++i)cin>>a[i];
    //for(int i = 1;1<=n;++i)prefix[i]=prefix[i-1]+a[i];
    //×：
    //for(int i = 1;1<=n;++i){
    //    cin >> a[i];
    //    prefix[i]=prefix[i-1]+a[i];
    //}
    return 0;
}