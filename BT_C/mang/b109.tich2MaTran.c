#include<stdio.h>

void nhap(int a[][100],int n,int m){
	int i,j;                                          
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d", &a[i][j]);
		}
	}
}
void tichMaTram(int a[][100],int b[][100],int n,int m){
	int j,i,k;
	int c[100][100];
	for(j=0;j<n;j++){
		for(k=0;k<n;k++){
			c[j][k]=0;
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			for(k=0;k<m;k++){
				c[i][j]+=a[i][k]*b[k][j];
			}
		}
	} 
	for(j=0;j<n;j++){
		for(k=0;k<n;k++){
			printf("%d ",c[j][k]);
		}printf("\n");
	}
}
int main(){
	int a[100][100],b[100][100],m,n;
	scanf("%d%d",&n,&m);
	nhap(a,n,m);
	nhap(b,m,n);
	tichMaTram(a,b,n,m);
	return 0;
}

