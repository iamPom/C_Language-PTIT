#include<stdio.h>

int main(){
	int i,j,c,d,n,e;
	scanf("%d",&n);
	c=1;
	d=1;
	e=n;
	for(i=0;i<n;i++){
		for(j=0;j<n-i;j++){
				printf("%d ",c);
				c+=e;
				e--;		 
		}printf("\n");
		e=n;
		d++;
		c=d;
	}
	return 0;
}
