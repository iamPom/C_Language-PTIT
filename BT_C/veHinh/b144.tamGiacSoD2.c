#include<stdio.h>

int main(){
	int i,j,n,c=1,d=1;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n-i;j++){
		
			printf("%d",c);
			c++;
		 
		}printf("\n");
		c=d+1;
		d++;
	}
	return 0;
}

