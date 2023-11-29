#include<bits/stdc++.h>
#define pi 3.14159//定义pi为3.14159
using namespace std;

int main(){
    double r;//r表示圆的半径
    cin>>r;//输入获取半径
    cout<<fixed<<setprecision(4)<<2 * r<<" ";//直径：半径*2
    cout<<fixed<<setprecision(4)<<2 * pi * r<<" ";//周长：直径(2*r)*派(3.14159)
    cout<<fixed<<setprecision(4)<<pi * r * r<<" ";//面积：半径*半径*派(3.14159)
    return 0;//好习惯
}