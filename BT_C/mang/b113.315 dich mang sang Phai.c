#include<stdio.h>


int main(){
	int b[100],a[100],n;
	scanf("%d",&n);
	int i,c;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	} scanf("%d",&c);
	for(i=0;i<n;i++){
		if(i<n-c) b[i+c]=a[i];
		else b[i-n+c]=a[i];
	}
	for(i=0;i<n;i++){
		printf("%d ",b[i]);
	}
	return 0;
}
