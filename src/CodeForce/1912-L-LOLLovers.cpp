#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,my_O=0,friend_O=0,my_L=0,friend_L=0,sum_O=0,sum_L=0;
    s s;
    cin>>n>>s;
    for(int i = 0;i < n;i++)
        if(s[i]=='O')
            sum_O++;
        else if(s[i]=='L')
            sum_L++;
    // cout<<sum_O<<" "<<sum_L<<endl;
    for(int i = 0;i < n;i++) {
        if(s[i]=='O'){
            my_O++;
        }
        else if(s[i]=='L'){
            my_L++;
        }
        friend_L=sum_L-my_L;
        friend_O=sum_O-my_O;
        if(my_L!=friend_L&&my_O!=friend_O&&friend_O+friend_L>=1&&my_O+my_L>=1){
            // cout<<my_L<<" "<<my_O<<endl;
            // cout<<friend_L<<" "<<friend_O<<endl;
            cout<<my_O+my_L<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
    return 0;
}