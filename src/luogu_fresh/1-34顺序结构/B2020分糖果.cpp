#include<bits/stdc++.h>
using namespace std;
//思路：按照顺序将1-5个小朋友的糖果分成原来的1/3份，分给相邻的小朋友（由于小朋友围起来了，所以1号小朋友和5号小朋友特殊考虑，他们分别要分给5，2小朋友和4，1小朋友），算出每个小朋友吃掉的（余三即可），最后输出即可

int main(){
    int child[5], eat, division;//五个小朋友的糖果数量，吃掉的糖果数，分掉的糖果数
    for(int i = 0;i < 5;i++)
        cin>>child[i];//获取五个小朋友的糖果初始值
    for(int i = 0;i < 5;i++){//五次分糖果
        division = child[i] / 3;//均匀分成的三分
        if(i == 0){//第一个小朋友分给第5和第2个小朋友
            child[4] += division;
            child[1] += division;
        }
        else if(i == 4){//第
            child[0]+=division;
            child[3]+=division;
        }
        else{//其余小朋友分给自己第序号+1和-1个小朋友
            child[i + 1] += division;
            child[i - 1] += division;
        }
        eat += child [i] % 3;//吃掉多余的
        child [i] = division;//自己也只剩一份
    }
    for(int i = 0;i < 5; i++)
        cout<<child[i]<<" ";
    cout<<endl<<eat;
}
