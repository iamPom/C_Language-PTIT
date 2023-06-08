#include<stdio.h>

int main(){
	int i,j,n,c,d;
	c=1;
	
	scanf("%d",&n);
	for(i=0;i<n;i++){
		d=i+1;
		for(j=0;j<=i;j++){
			if(i%2==0){
				printf("%d",c);
				c+=1;
			}else {
				printf("%d", d);						
				d--;
			}
		
		 
		}printf("\n");
		c=1;
	}
	return 0;
}
