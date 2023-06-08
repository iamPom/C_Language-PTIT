#include<stdio.h>

void nhap(int arr[], int n){
	
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
}
void demChanLe(int arr[], int n){
	int i;
	for(i=0;i<n;i++){
		if(arr[i]%2==0){
			printf("%d ", arr[i]);
		}
	}printf("\n");
		for(i=0;i<n;i++){
		if(arr[i]%2!=0){
			printf("%d ", arr[i]);
		}
	}
}
int main(){
   int arr[100], n;
   scanf("%d", &n);
   nhap(arr,n);
   demChanLe(arr,n);
   return 0;
}

