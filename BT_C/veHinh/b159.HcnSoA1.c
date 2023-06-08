#include<stdio.h>

int main(){
	int n,m,i,j,max,min,a,b,c;
	scanf("%d%d",&n,&m);
	max=n;
	if(n<m) max=m;
	for(i=0;i<n;i++){
		b=max;
		for(j=0;j<m;j++){
			if(j>=i){
			a=max-i;
			printf("%d",a);
			} else {
				printf("%d", b);
				b--;
			}		
		}		
		printf("\n");
	}
	return 0;
}

