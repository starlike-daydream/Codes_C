#include<stdio.h>
int n,k;
int step=0;
int book[20];
int panduan[20];
// TODO 甘鑫找我帮忙的，他写的
void dfs(int step){
	if(step==n){
		for(int i=0;i<k;i++){
			printf("%d ",book[i]);
		}
		printf("\n");
		return;	
	}
	for(int i=1;i<=n;i++){
    	if(panduan[i]==0){
    		panduan[i]=1;
    		book[step]=i;
    		dfs(step+1);
    		panduan[i]=0;
		}
	}
}
int main(){
	scanf("%d %d",&n,&k);
	dfs(0);
	return 0;
}