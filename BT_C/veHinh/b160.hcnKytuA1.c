#include<stdio.h>

int main(){
	int n,m,i,j,max,min,a,b,c;
	scanf("%d%d",&n,&m);
	max=n;
	if(n<m) max=m;
	for(i=0;i<n;i++){
		b=96+max;
		for(j=0;j<m;j++){
			if(j>=i){
			a=96+max-i;
			printf("%c",a);
			} else {
				printf("%c", b);
				b--;
			}		
		}		
		printf("\n");
	}
	return 0;
}
