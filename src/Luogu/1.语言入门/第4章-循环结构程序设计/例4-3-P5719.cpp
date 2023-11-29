#include<cstdio>

int main(){
    int n,k;
    scanf("%d%d",&n,&k);
    int Asum = 0;
    for(int i = k;i <= n;i++) 
        if(i%k==0)
            Asum += i;
    int Bsum = (n+1)*n/2-Asum;
    printf("%.1f ",double(Asum)/(n/k));
    printf("%.1f",double(Bsum)/(n-n/k));
}
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n,k,sum_a=0,a=0,sum_b=0,b=0;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         if(i%k==0){
//             a++;
//             sum_a+=i;
//         }
//         else{
//             b++;
//             sum_b+=i;
//         }
//     }
//     printf("%.1f ",sum_a==0?0.0:sum_a*1.0/a);
//     printf("%.1f",sum_b==0?0.0:sum_b*1.0/b);
//     return 0;
// }