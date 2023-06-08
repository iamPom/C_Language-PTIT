#include<stdio.h>

void nhap(int arr[], int n){
	
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
}
void tim2Min(int arr[], int n){
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
	int	min2=max;
	for(i=0;i<n;i++){
			if(min2>arr[i]&&arr[i]>min){
				min2=arr[i];
		    }
	}
	printf("%d %d", min, min2);
}

int main(){
   	int arr[100],n;
	scanf("%d", &n);
   	nhap(arr,n);
   	tim2Min(arr, n);
	return 0;
}
