#include<stdio.h>

void mTranCv(int a[100][100],int b[100][100],int n,int m){
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			b[j][i]=a[i][j];
		}
	}
}
int tichMt(int a[100][100],int b[100][100],int c[100][100],int n,int m){
	int i,j,k;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			for(k=0;k<m;k++){
				c[i][j]+=a[i][k]*b[k][j];
			}		
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d ",c[i][j]);
		} printf("\n");
	}
}

int main(){
	int a[100][100],c[100][100]={0},b[100][100],n,m;
	scanf("%d%d",&n,&m);
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	mTranCv(a,b,n,m);
	tichMt(a,b,c,n,m);
	return 0;
}

