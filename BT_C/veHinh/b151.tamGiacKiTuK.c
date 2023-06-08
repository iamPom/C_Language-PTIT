#include<stdio.h>

int main(){
	int i,j,c,d,n,e;
	scanf("%d",&n);
	c=65;
	d=65;
	e=n-1;
	for(i=0;i<n;i++){
		for(j=0;j<=i;j++){
		
			printf("%c ",c);
			
			c+=e;
			e--;
			
		 
		}printf("\n");
		e=n-1;
		d++;
		c=d;
	}
	return 0;
}

