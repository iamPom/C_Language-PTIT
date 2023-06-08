#include<stdio.h>

int main(){
	int i,j,n,c=1,d=1;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		c=5+i-4;
		for(j=0;j<=i;j++){
		
			printf("%d",c);
			c++;
		 
		}printf("\n");
	}
	return 0;
}

