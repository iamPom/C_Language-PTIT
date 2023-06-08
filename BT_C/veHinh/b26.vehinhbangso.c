#include<stdio.h>
int main(){
	int n,ss=1;
	scanf("%d",&n);
	int i, j;
	for( i=0;i<n;i++){
		for( j=0;j<n;j++){
		printf("%d ",ss);
		ss++;
		}
		printf("\n");
	}
	return 0;
}
