#include<stdio.h>

int main(){
	int i,j,n;
	scanf("%d",&n);
	for(i=0;i<2*n-1;i++){
		if(i<n){
			for(j=0;j<n+i;j++){
				if(j<n-i-1) printf("~");
				else printf("*");
			}
		}
		else{
			for(j=0;j<n+n+n-2-i;j++){
				if(j<=i-n) printf("~");
				else printf("*");
			}
		}
		printf("\n");
	}
	return 0;
}
