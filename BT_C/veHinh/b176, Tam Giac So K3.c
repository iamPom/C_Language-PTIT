#include<stdio.h>

int main(){
	int a,b,n,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		a=i+1;
		b=1;
		for(j=0;j<n;j++){
			if(j>=i) printf("%4d",a);
			else printf("    ");
			a+=b++;
		}printf("\n");
	}
	return 0;
}

