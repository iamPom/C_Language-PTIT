#include<stdio.h>

int main(){
	int i,j,n,c,d;
	scanf("%d",&n);
	c=64+n-1;
	d=c;
	for(i=0;i<n;i++){
	
		for(j=0;j<n-i;j++){
		
			printf("%c",c);
			c+=1;
		 
		}printf("\n");
		d--;
		c=d;
	}	
	return 0;
}

