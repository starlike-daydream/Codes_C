#include <bits/stdc++.h>
#define ll long long
using namespace std;
int p, q, r, B;//等式左边两个乘数p,q和等式右边的结果r,进制B
ll convert(int, int);//转换十进制数到B进制数的方法

int main(){
    cin >> p >> q >> r;
    for (B = 2; B <= 16; B++){//根据题目给的B的2-16的范围循环
        if (convert(p, B) * convert(q, B) == convert(r, B)){//如果在这个进制下满足p*q==r
            if(convert(p,B) == 0 || convert(q,B) == 0 || convert(r,B) == 0)//特殊判断：防止进制转换出错的情况，也就是说这个数的每一位都不可能出现比这个进制的权等于或大于的情况
                continue;//进制转换失败就跳过这个B的情况
            cout << B << endl;//满足条件则输出进制B并结束程序
            return 0;
        }
    }
    cout << 0;//遍历完所有情况仍然没有退出程序，说明没有符合条件的进制，输出0
    return 0;
}
ll convert(int n, int b){
    int mod, i = 0;//得到余数和数的位
    ll res = 0;//初始化转换的结果，转换成15，16进制可能会变大，所以用long long装
    while (n >= 1){//当n没有被除尽时，就让它一直转换
        mod = n % 10;//获取从低到高的位的数
        if(mod >= b)//如果这一位上的数大于等于进制B
            return 0;//那就说明转换失败，返回0以作为判断标志，因为题目给的数最小也是1
        res += mod * pow(b, i++);//把这一位数乘以这一位的进制的权得到这一位转化的结果，加到转化结果中，并对权+1
        n /= 10;//让被转化的数整除以10获取下一位的数
    }
    return res;//返回转化的结果
}