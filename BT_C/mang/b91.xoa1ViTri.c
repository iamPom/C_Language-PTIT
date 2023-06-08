#include<stdio.h>

void nhapN(int arr[], int n){
	
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
}
void sauKhiXoa(int arr[],int n, int p){
	int i;
	for(i=p-1;i<n-1;i++){
		arr[i]=arr[i+1];
	}
	for(i=0;i<n-1;i++){
		printf("%d ", arr[i]);
	}
}
int main(){
   int arr[100],n,p;
   scanf("%d", &n);
   nhapN(arr,n);
   scanf("%d",&p);
   sauKhiXoa(arr,n,p);
   return 0;
}

