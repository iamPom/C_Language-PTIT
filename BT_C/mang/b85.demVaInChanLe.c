#include<stdio.h>

void nhap(int arr[], int n){
	
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
}
void demChanLe(int arr[], int n){
	int i, chan=0, le=0;
	for(i=0;i<n;i++){
		if(arr[i]%2==0) chan++;
		else le++;
	}
	printf("%d", le);
	for(i=0;i<n;i++){
		if(arr[i]%2!=0){
			printf(" %d", arr[i]);
		}
	}
	printf("\n%d", chan);
		for(i=0;i<n;i++){
		if(arr[i]%2==0){
			printf(" %d", arr[i]);
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


