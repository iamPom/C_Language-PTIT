#include<stdio.h>

int main(){
	int n,m,i,j,max;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++){
		for(j=m-1;j>=0;j--){
			if(j>=i){
			printf("%c",64+m-j+i);				
			} 
			else {
			printf("%c",64+j+1);
			}		
		}	
		printf("\n");
	}
	return 0;
}
