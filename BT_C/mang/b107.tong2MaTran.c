#include<stdio.h>

void nhap(int a[100][100],int n,int m){
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d", &a[i][j]);
		}
	}
}
void tongMaTran(int a[100][100],int b[100][100],int n, int m){
	int i,j,c[100][100];
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
		printf("%d ", c[i][j]);
		} printf("\n");
	}
}
int main(){
	int a[100][100],b[100][100],n,m;
	scanf("%d%d",&n,&m);
	nhap(a,n,m);
	nhap(b,n,m);
	tongMaTran(a,b,n,m);
	return 0;
}

