#include<stdio.h>

int main(){
	int i,j,n;
	scanf("%d",&n);
	for(i=0;i<2*n-1;i++){
		if(i<n){
			for(j=0;j<n;j++){
				if(j<n-i-1) printf("~");
				else printf("*");
			}
		}
		else{
			for(j=0;j<n;j++){
				if(j<=i-n) printf("~");
				else printf("*");
			}
		}
		printf("\n");
	}
	return 0;
}
