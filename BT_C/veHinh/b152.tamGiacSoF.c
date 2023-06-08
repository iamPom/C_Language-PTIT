#include<stdio.h>

int main(){
	int i,j,n,c,d;
	c=1;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<2*i+1;j++){
				printf("%d",c);							
			c+=1;
			//d+=2;
		 
		}printf("\n");
		c=1;
	//	d=2;
	}
	return 0;
}
