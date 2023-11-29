#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
    cout<<rand()<<endl;//固定随机数
    srand(time(0));//喂时间种子
    cout<<rand()<<endl;//0-32627（Windos）
    cout<<rand()%20<<endl;//0-19
    cout<<rand()%20+1<<endl;//1-20
    cout<<rand()%10+39<<endl;//39-49
    //a-b    rand()%（b-a+1）+a
    return 0;
}