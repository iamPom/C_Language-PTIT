#include<stdio.h>

int main(){
	int i,j,n;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i<n-j-1){
				printf("~");
			}else{
				if(i>1&&i<n-1&&j>n-1-i&&j<n-1) printf(".");
				else printf("*");
			} 
		}printf("\n");
	}
	return 0;
}

