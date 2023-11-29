#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    cout<<(a + b) / c;//没错，这是相除运算，需要注意的是当/两边都是整数时，运算结果也是整数，当/两边其中有一边是浮点数，那运算结果也将是浮点数，这涉及到隐式类型转换，简单讲就是较小（指内存占用空间）的数据类型在运算时会自动转换为较大的数据类型再运算
                  //数据类型大小：double > float > long long> int > short (=char) > byte（注意 : 虽然float占用4个字节 , 但是取值范围要比8个字节的long long更大 , 这是因为小数的二进制存储形式要更加节省内存）
    return 0;//好习惯
}