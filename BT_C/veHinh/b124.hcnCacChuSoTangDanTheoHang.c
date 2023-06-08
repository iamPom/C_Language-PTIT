#include<stdio.h>

int main(){
	int i,j,n,m,c=1;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d",c);
			c++;
		}printf("\n");
	}
	return 0;
}
