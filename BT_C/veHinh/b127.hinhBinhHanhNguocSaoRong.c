#include<stdio.h>

int main(){
	int i,j,n,m;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++){
		for(j=0;j<m+n-1;j++){
			if(i>0&&j<i) printf("~");
			else{
				if(j>=i+m&&j<m+n-1){
					printf(" ");
				} 
				else {
					if(i>0&&i<n-1&&j>i&&j<m+i-1) printf(".");
					else printf("*");
				}		
			}	
		}printf("\n");
	}
	return 0;
}
