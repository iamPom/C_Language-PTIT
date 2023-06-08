#include<stdio.h>

int main(){
	int n,m,i,j,max;
	scanf("%d%d", &n,&m);
	max=n;
	if(n<m) max=m;
	int b=1;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
		int a =max-i-j;
		if (a>0) printf("%d",a);
		else {
			a=++b;
			printf("%d", a);
		}
		} b=1;
		 printf("\n");	
	}
	return 0;
}

