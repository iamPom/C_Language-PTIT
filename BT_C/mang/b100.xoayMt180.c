#include<stdio.h>

void nhap(int a[100][100],int n){
	int i,j;
	for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				scanf("%d",&a[i][j]);
			}
	}
}	
int xoay180(int a[100][100],int b[100][100],int n){
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			b[n-i-1][n-j-1]=a[i][j];
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
}
int main(){
	int a[100][100],b[100][100],n;
	scanf("%d",&n);
	nhap(a,n);
	xoay180(a,b,n);
	return 0;
}
