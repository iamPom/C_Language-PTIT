#include<stdio.h>

void sapXep(int a[][100],int n){
	int i,j;
	for(i=0;i<n+n-1;i++){
		for(j=i;j<n+n-1-i;j++){
			a[i][j]=n-i;
		}
		for(j=i+1;j<n+n-2-i;j++){
			a[j][n+n-2-i]=n-i;
		}	
		for(j=n+n-2-i;j>=i;j--){
			a[n+n-2-i][j]= n-i;
		}
		for(j=n+n-2-i;j>i;j--){
			a[j][i]=n-i;
		}
	}
}
void out(int a[][100],int n){
	int i,j;
	for(i=0;i<n+n-1;i++){
		for(j=0;j<n+n-1;j++){
			printf("%d",a[i][j]);
		}printf("\n");
	}
}
int main(){
	int a[100][100],n;
	scanf("%d",&n);
	sapXep(a,n);
	out(a,n);
	return 0;
}

