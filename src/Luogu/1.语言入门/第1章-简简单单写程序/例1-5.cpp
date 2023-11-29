#include<bits/stdc++.h>
using namespace std;

int main(){
    cout<<500.0 / 3<<endl;
    cout<<5000000.0 / 3<<endl;
    cout<<0.000005 / 3<<endl;
    cout<<5e6 / 3 + 5e-6 / 3 - 5e6 / 3<<endl;
    return 0;
}

//5e6:5*10^6  注意不能有空格
//使用cout输出浮点数，超过六位有效数字就会使用科学计数法表示