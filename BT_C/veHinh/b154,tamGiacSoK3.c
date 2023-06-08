#include<stdio.h>

int main(){
	int i,j,c,d,n,e;
	scanf("%d",&n);
	c=1;
	d=1;
	e=1;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(j>i){
				printf("%4d ",c);
				c+=e;
				e++;
			}
						 
		}printf("\n");
		e=n;
		d++;
		c=d;
	}
	return 0;
}
