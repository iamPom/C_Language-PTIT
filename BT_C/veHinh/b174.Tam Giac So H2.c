#include<stdio.h>

int main(){
	int i,j,n;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		int a=2*i+2;
		int m=0;
		for(j=0;j<1+2*i;j++){
			m+=2;
		
			if(j<=i) printf("%d",m);
			else {	a-=2;
			printf("%d",a);// ve hinh bang chu ngTac H chi viec + them 63 vao a va m, in %c
			}
		} printf("\n");
	}
	return 0;
}
