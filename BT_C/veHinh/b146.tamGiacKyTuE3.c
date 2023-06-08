#include<stdio.h>

int main(){
	int i,j,n,c=65,d=65;
	scanf("%d",&n);
	for(i=0;i<n;i++){
	
		for(j=0;j<n-i;j++){
		
			printf("%c",c);
			c+=2;
		 
		}printf("\n");
		d+=2;
		c=d;
	}	
	return 0;
}
