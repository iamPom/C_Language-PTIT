#include<stdio.h>
#include<math.h>

int main(){
	int n,m,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n+i;j++){
			if(i<n-j-1) printf("~");
			else printf("%d",abs(n-j-1));
		} printf("\n");
	}
	return 0;
}

