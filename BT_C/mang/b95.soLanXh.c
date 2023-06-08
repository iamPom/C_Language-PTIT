#include<stdio.h>

void nhap(int a[],int n){
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
}
int cacSo(int b[],int n,int c){
	int i;
	for(i=0;i<n;i++){
		if(b[i]==c){
			return i;
		}
	}
	return -1;
}


void soLanXh(int a[],int n){
	int b[100], dem[100],i,count;
	int m=0;
	for(i=0;i<n;i++){
		dem[i]=0;
	}
	for(i=0;i<n;i++){
		count=cacSo(b,m,a[i]);
		if(count==-1){
			b[m]=a[i];
			dem[m]=1;
			m++;
		} else dem[count]++;
	}
	for(i=0;i<m;i++){
		printf("%d %d\n",b[i],dem[i]);
	}
}
int main(){
   int a[100],n;
   scanf("%d",&n);
   nhap(a,n);
   soLanXh(a,n);
   return 0;
}

