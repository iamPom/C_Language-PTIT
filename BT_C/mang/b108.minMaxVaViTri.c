#include<stdio.h>

void nhap(int a[],int n){
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
}
void locationMinMax(int a[],int n){
	int countMin=1,countMax=1,i,j,min=a[0],max=a[0];
	for(i=1;i<n;i++){
		if(max<=a[i]){
			max=a[i];
			countMax =i+1;
		}
	}
	for(i=1;i<n;i++){
		if(min>=a[i]){
			min=a[i];
			countMin =i+1;
		}
	}
	printf("%d %d",max,countMax);
	printf("\n%d %d",min,countMin);
}
int main(){
	int a[100],n;
	scanf("%d",&n);
	nhap(a,n);
	locationMinMax(a,n);
	return 0;
}

