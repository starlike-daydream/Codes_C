// #include<bits/stdc++.h>
// #define ll long long;
// #define IOS ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
// using namespace std;
// string convert(int), to_bin(int);

// int main(){
//     // int n,mod;
//     // string s="",ans="";
//     // bool flag = 1;
//     // cin>>n;
//     // s=to_bin(n);
//     // // cout<<s<<endl;
//     // for (int i = 0; i < s.size(); i++){
//     //     if(s[i]=='1'){
//     //         // cout<<s.size()-i-1<<' ';
//     //         if(flag){
//     //             ans+="2("+convert(to_bin(s.size()-i-1))+")";
//     //             flag = 0;
//     //         }
//     //         else
//     //             ans+="+2("+convert(to_bin(s.size()-i-1))+")";
//     //     }
//     // }
//     // cout<<ans<<endl;
//     cout<<convert(3)<<endl;
//     cout<<convert(4)<<endl;
//     cout<<convert(5)<<endl;
//     cout<<convert(6)<<endl;
//     cout<<convert(7)<<endl;
//     cout<<convert(8)<<endl;
//     cout<<convert(9)<<endl;
//     cout<<convert(10)<<endl;
//     return 0;
// }

// string convert(int i){
//     if(i == 0) return "0";
//     if(i == 1) return "2(0)";
//     if(i == 2) return "2";
//     if(i == 3) return "2+2(0)";
//     if(i == 4) return "2(2)";
//     if(i % 2 == 0)
//         // if()
//         //     return "2("+convert(i%(i/2)+1)+")";
//         // else
//             return convert(i-2)+"+2";
//     else
//         return convert(i/2*2)+"+2(0)";
// }
// string to_bin(int n){
//     int mod;
//     string s="";
//     while(n>0){
//         mod = n % 2;
//         s = to_string(mod) + s;
//         n /= 2;
//     }
//     return s;
// }
#include<stdio.h>
#include<iostream>
#include<stdbool.h>
#include<math.h> 
//其中有log2(x)和pow(x,y)  
using namespace std; 

//创建一个divide函数 对数进行分解 数据不大直接分解不会超时 
//譬如 137=2(7)+2(3)+2(0) 所以被分解为【7,3,0】 分治法 
//接着再分解，如果不是0或1那么就再递归一层，否则就输出2(0)或2 
void divide(int x){
	bool flag =false; //判断是否是第一个，如果是的话就不输出加号 
	while(x!=0){ //只要没有被减到 0，不结束 
		int t=int(log2(x));
		//求以2为底的对数，
 		//强制转换成int是为了找到离x最近又小于x的数 
 		//譬如int(log2(137))返回的是7,2^7 = 128，是离137最近的能表示的它的数 
		 if(flag){
		 	cout <<"+";
		 } 
		 if(t == 1){
		 	//说明这一项是2
			 cout << "2"; 
		 }else if(t == 0){
		 	//说明这一项是1 
		 	cout << "2(0)"; 
		 }else{
		 	cout << "2(";
		 	divide(t); // 进一步分解 ，递归 
		 	cout << ")";
		 }
		 x -= pow (2,t); // 继续处理下一项 
		 flag = true; //此时完全处理完其中的一项 
	}
}
int main(){
	int n;
	cin >> n;
	divide (n);
	return 0;
}
