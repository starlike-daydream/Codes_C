#include <iostream>
using namespace std;
int conv(int n,int to){
    // string s="";
    // while(n) s=to_string(n%to)+s,n/=to;
    // int sum=0;
    // for(int i=0;i<s.size();i++) sum+=int(s[i]-'0');
    int sum=0;
    while(n) sum+=n%to,n/=to;
    return sum;
}

bool luck(int n){
    if(n%conv(n,2)!=0||n%conv(n,8)!=0||n%conv(n,10)!=0||n%conv(n,16)!=0) return 0;
    return 1;
}
int main()
{
//	cout<<conv(1,10)<<' '<<conv(1,2)<<' '<<conv(1,8)<<' '<<conv(1,16)<<endl; 
//    cout<<luck(1)<<endl;
	// cout<<conv(126,10);
    // return 0;
  // ���ڴ��������Ĵ���
  int cnt=1,i=1;
//   for(;cnt<=2023;i++){
  for(;cnt<=2023;i++){
      if(luck(i)) cnt++;
  }
  cout<<--i;
  return 0;
}


