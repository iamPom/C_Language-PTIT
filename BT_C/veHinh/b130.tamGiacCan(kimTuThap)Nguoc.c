#include<stdio.h>

int main(){
	int i,j,n;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<2*n-1;j++){
			if(j<i){
				printf("~");
			}else{
			if(i>0&&j<2*n-1&&j>=2*n-i-1) printf(" ");
			else printf("*");
			}
		
		}printf("\n");
	}
	return 0;
}
