#include<stdio.h>

int main(){
	int i,j,n;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i>=1&&j>=1&&i<n-1&&j<n-i-1){
				printf(".");
			}else{
			if(j>=n-i) printf(" ");
			else printf("*");
			}
		
		}printf("\n");
	}
	return 0;
}
