#include<stdio.h>

void nhap(int arr[], int n){
	
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
}
void timMax2(int arr[], int n){
	int i;
	int min=arr[0], max=arr[0];
	for(i=1;i<n;i++){
		if(max<arr[i]){
			max=arr[i];			
		}
		if(min>arr[i]){
			min=arr[i];
		}
    } 
	int	max2=min;
	for(i=0;i<n;i++){
		if(max2<arr[i]&&arr[i]<max){
			max2=arr[i];
		}
	}
	printf("%d %d",max, max2);
}

int main(){
   	int arr[100],n;
	scanf("%d", &n);
   	nhap(arr,n);
   	timMax2(arr, n);
	return 0;
}
