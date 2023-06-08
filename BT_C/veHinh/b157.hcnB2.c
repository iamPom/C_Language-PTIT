#include<stdio.h>

int main(){
	int n,m,i,j,a;
	scanf("%d%d", &n,&m);
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(i<=n-m) printf("%d",m);
			else{
			a =n-i+j;
			if(a>m) a=m;
			printf("%d",a);
			}
			
		}printf("\n");
	}
	return 0;
}

