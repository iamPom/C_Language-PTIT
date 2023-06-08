#include<stdio.h>

int phanTu(int n,int k){
	int index=1;
	int i;
	for(i=1;i<=k;i++,n--){
		index=index*n/i;
	}
	return index;
}
int main(){
	int n,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=n-1;j>i;j--){
			printf(" ");
		}
		for(j=0;j<=i;j++){
			printf("%d ",phanTu(i,j));
		}
		printf("\n");
	}
	return 0;
}

