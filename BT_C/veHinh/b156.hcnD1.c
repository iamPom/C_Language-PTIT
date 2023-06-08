#include<stdio.h>

int main(){
	int n,m,i,j;
	scanf("%d%d", &n,&m);
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(i==j) printf("1");
			if(j>i){
				printf("%d", j+1-i);
			}
			if(j<i) printf("%d", i+1-j);
		} printf("\n");	
	}
	return 0;
}

