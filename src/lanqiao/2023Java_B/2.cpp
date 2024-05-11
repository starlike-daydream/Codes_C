#include <iostream>
using namespace std;
#define int short
const signed N = 3.14e4;
int a[N][N];
signed main()
{
  // 请在此输入您的代码
  int x1,y1,x2,y2,x3,y3,x4,y4;
  cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
  for(int i=x1;i<x2;i++)
    for(int j=y1;j<y2;j++)
        a[i][j]=1;
  for(int i=x3;i<x4;i++)
    for(int j=y3;j<y4;j++)
        a[i][j]=1;
    int cnt=0;
for(int i=0;i<N;i++)
    for(int j=0;j<N;j++)
        if(a[i][j])cnt++;
    cout<<cnt;
  return 0;
}