#include<stdio.h>

int main(){
	int n,m,i,j,max;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++){
		for(j=m-1;j>=0;j--){
			if(j==m-1){printf("%d", i+1);
			}else {
				if(j>=i){
				printf("%d",m-j+i);				
				} 
				else {
				printf("%d",j+1);
				}	
			}	
		}	
		printf("\n");
	}
	return 0;
}
