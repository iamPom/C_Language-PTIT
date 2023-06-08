#include<stdio.h>

int main(){
	int i,j,n;
	scanf("%d",&n);
	for(i=0;i<2*n-1;i++){
		if(i<n){
			for(j=0;j<n+i;j++){
				if(i>0&&j<2*i) printf("~");
				else printf("*");
			}
		}
		else{
			for(j=0;j<3*n-i-2;j++){
				if(j<4*n-2*i-4&&i<2*n-2) printf("~");
				else printf("*");
			}
		}
		printf("\n");
	}
	return 0;
}
