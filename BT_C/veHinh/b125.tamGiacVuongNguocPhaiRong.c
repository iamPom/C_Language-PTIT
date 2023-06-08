#include<stdio.h>

int main(){
	int i,j,n;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(j<i){
				printf("~");
			}else{
				if(i>0&&i<n-2&&j>i&&j<n-1) printf(".");
				else printf("*");
			}		
		}printf("\n");
	}
	return 0;
}


