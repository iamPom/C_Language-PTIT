#include<stdio.h>

int main(){
	int i,j,n,c=1;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(j<n-i-1) printf("~");
		else printf("%d",c);
		}printf("\n");
		c++;
	}
	return 0;
}

