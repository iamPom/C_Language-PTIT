#include<stdio.h>

int main(){
	int n,m,i,j,max;
	scanf("%d%d",&n,&m);
	max=n;
	if(n<m) max=m;
	for(i=0;i<n;i++){
		for(j=m-1;j>=0;j--){
			if(j>i){
				printf("%c",63+m+i-j);				
			} else {
				printf("%c", 63+m);
			}		
		}	
		printf("\n");
	}
	return 0;
}
