#include<stdio.h>

void nhap(int arr[],int n){
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
}
int ktraDx(int arr[],int n){
	int i;
	for(i=0;i<n;i++){
		if(arr[i]!=arr[n-i-1]){
			return 0;
		}
	}
	return 1;
}
int main(){
   int arr[100],n;
   scanf("%d",&n);
   nhap(arr, n);
   if(ktraDx(arr,n)){
   	printf("1");
   }else printf("0");
   return 0;
}

