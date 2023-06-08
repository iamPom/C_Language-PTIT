#include<stdio.h>

int main(){
	int n,m,i,j,max;
	scanf("%d%d",&n,&m);
	max=n;
	if(n<m) max=m;
	for(i=n-1;i>=0;i--){
		for(j=m-1;j>=0;j--){
			if(j>=i){
				printf("%d",max-i);				
			} else {
				printf("%d", max-j);
			}		
		}	
		printf("\n");
	}
	return 0;
}
