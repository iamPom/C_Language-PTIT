#include<stdio.h>

int main(){
	int i,j,n,c,d;
	c=1;
	d=2;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<=i;j++){
			if(i%2==0){
				printf("%d",c);	
			}else printf("%d",d);						
			c+=2;
			d+=2;
		 
		}printf("\n");
		c=1;
		d=2;
	}
	return 0;
}
