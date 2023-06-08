#include<stdio.h>

void nhap(int a[100][100],int n){
	int i,j;
	for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				scanf("%d",&a[i][j]);
			}
	}
}

int tongTrenDuoi(int a[100][100],int n){
	int i,j,sumBot=0,sumTop=0;
	for(i=0;i<n;i++){
		for(j=0;j<i;j++){
			sumBot+=a[i][j];
		}
	}
	for(i=0;i<n;i++){
		for(j=n-1;j>i;j--){
			sumTop+=a[i][j];
		}
	}
	printf("%d %d",sumTop,sumBot);
}
int main(){
	int a[100][100],n;
	scanf("%d",&n);
	nhap(a,n);
	tongTrenDuoi(a,n);
	return 0;
}

