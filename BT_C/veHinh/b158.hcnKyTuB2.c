#include<stdio.h>

int main(){
	int n,m,i,j,a;
	scanf("%d%d", &n,&m);
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(i<=n-m) printf("%c",64+m);
			else{
			a =64+n-i+j;
			if(a>64+m) a=64+m;
			printf("%c",a);
			}
			
		}printf("\n");
	}
	return 0;
}

