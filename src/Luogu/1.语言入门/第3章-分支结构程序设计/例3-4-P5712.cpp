#include<iostream>
using namespace std;

int main(){
    int x;
    cin>>x;
    cout<<"Today, I ate "<<x<<" apple";
    if(x != 1 && x != 0){
        cout<<"s";
    }
    cout<<"."<<endl;
    // if(x == 1 || x == 0)
    //     cout<<"Today, I ate "<<x<<" apple.";
    // else
    //     cout<<"Today, I ate "<<x<<" apples.";
    return 0;
}