#include<stdio.h>


int main(){
	int b[100],a[100],n;
	scanf("%d",&n);
	int i,c;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	} scanf("%d",&c);
	for(i=0;i<n;i++){
		if(i>c-1) b[i-c]=a[i];
		else b[n-c+i]=a[i];
	}
	for(i=0;i<n;i++){
		printf("%d ",b[i]);
	}
	return 0;
}

