#include<stdio.h>

int main(){
	int i,j,n;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<2*n;j++){
			if(i<n-j-1){
				printf("~");
			}else{
				if(j>=2*n-1-i) printf(" ");
				else{
					if(i>0&&i<n-1&&j>=n-i&&j<2*n-2-i) printf(".");
					else printf("*");							
				} 
			}
		
		}printf("\n");
	}
	return 0;
}
