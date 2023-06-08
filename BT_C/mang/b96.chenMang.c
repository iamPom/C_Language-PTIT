#include<stdio.h>

void nhap(int a[],int n){
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
}	
void chenMang(int a[],int n,int b[],int m, int p){
	int i;
	for(i=n+m-1;i>=p;i--){
		a[i]=a[i-m];
	}
	for(i=p;i<p+m;i++){
		a[i]=b[i-p];
	}
}
void hienThi(int a[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d ", a[i]);
	}
}
int main(){
	int a[100],b[100],n,m,p;
	scanf("%d%d%d",&n,&m,&p);
	nhap(a,n);
	nhap(b,m);
	chenMang(a,n,b,m,p);
	hienThi(a,m+n);
	return 0;
}

