/*
5
1000000000 1000000000 1000000000 1000000000 1000000000
*/
#include <iostream>
// #include <cmath>
using namespace std;
#define int long long
int a[100010];
// bool lowbit(int i,int j){
    // int sum_,sum=sum_=a[i]+a[j];
    // string bin="";
    // while(sum)
        // bin=to_string(sum%2)+bin,sum/=2;
    // cout<<i<<' '<<j<<' '<<sum_<<' '<<bin<<' '<<' '<<int(bin[0])-48<<' '<<bin.size()<<' '<<((bin[0]-48)<<(bin.size()-1))<<endl;
    // if(int(bin[0]-'0')<<(bin.size()-1)==sum_)
        // return 1;
    // return 0;
// }
int pow(int n,int m) {
    int res = 1;
    while(m--)
        res *= n;
    return res;
}
// static int k = 0;
int pow2[100];
int log2(int n){
    for (int k=0;;k++) {
        // cout << k << ' ';
        if (!pow2[k])
        //    pow2[k]=2<<k; 
           pow2[k]=pow(2,k); 
        if(n > pow2[k])
            return k;
    }
}
signed main()
{
    // 请在此输入您的代码
    int n, cnt = 0;
    long sum;
    // cout << pow(2, 2)<<endl;
    // cout << log2(2000000000) << endl;
    // return 0;
    cin >> n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<n;i++)
        for(int j =i+1;j<=n;j++){
            // cout<<i<<' '<<j<<' '<<int(log(sum=a[i]+a[j])/log(2))-1<<'\n';
            // if(lowbit(i,j))
            // if((2<<int(log(sum=a[i]+a[j])/log(2))-1)==sum)
            cout<<i<<' '<<j<<' '<<(sum=a[i]+a[j])<<' '<<log2(sum)<<'\n';
            if(1<<log2(sum=a[i]+a[j])==sum)
                cnt++;
        }
    cout<<cnt;
    return 0;
}