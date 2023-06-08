#include <stdio.h>

int nhap(int a[50][50],int n){
	int i,j;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d", &a[i][j]);
}	
int xoay(int a[50][50],int n ){
	int i,j;
	for(i=0;i<n;i++)
		{
		for(j=n-1;j>=0;j--)
			printf("%d ", a[j][i]);
		  printf("\n");
		}	
		
}
int main()
{
	int n;
	int a[50][50];
	scanf("%d", &n);
	nhap(a,n);
	xoay(a,n);
	return 0;
}

