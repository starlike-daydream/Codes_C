#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;//N，表示一共进行了 N 次游戏
    string p1,p2,r="Rock",s="Scissors",p="Paper";//表示游戏参与者Player1,Player2的选择以及石头剪刀布字符串变量表示
    cin>>N;
    for (int i = 0; i < N; i++){//N次猜拳
        cin>>p1>>p2;
        if(p1 == p2)//如果两个字符串相等
            cout<<"Tie\n";
        else if((p1==r&&p2==s)||(p1==s&&p2==p)||(p1==p&&p2==r))//如果参与者1出石头，参与者2出剪刀或者参与者1出剪刀，参与者2出布，或者参与者1出布，参与者2出石头
            cout<<"Player1\n";//则参与者1赢
        else //其他情况参与者2赢
            cout<<"Player2\n";
    }
    return 0; 
}

//思路：进行N次猜拳，每次获取两个字符串，判断是否相等，参与者1赢的情况分别进行输出，最后剩的就是参与者2赢的情况了