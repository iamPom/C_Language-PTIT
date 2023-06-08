#include<stdio.h>

void nhap(int arr[],int n){
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
}
void mangNguoc(int arr[],int n){
	int i,tmp;
	for(i=0;i<n/2;i++){
		tmp=arr[n-i-1];
		arr[n-i-1]=arr[i];
		arr[i]=tmp;
	
	}
	for(i=0;i<n;i++){
		printf("%d ", arr[i]);
	}
}
int main(){
   int arr[100],n;
   scanf("%d",&n);
   nhap(arr, n);
   mangNguoc(arr,n);
   return 0;
}

