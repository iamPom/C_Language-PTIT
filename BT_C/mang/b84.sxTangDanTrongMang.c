	#include<stdio.h>

void nhap(int arr[], int n){	
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
}
void sxTangDan(int arr[],int n){
	int i,j, tmp,c;
	for(i=0;i<n;i++){
		for(j=n-1;j>i;j--){
			if(arr[j]<arr[j-1]){
				tmp=arr[j-1];
				arr[j-1]=arr[j];
				arr[j]=tmp;
//				for(c=0;c<n;c++){
//					printf("%d ", arr[c]);					
//				}printf("\n");
			}
		}
	}
}
void hienThi(int arr[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
}
int main(){
   int arr[100],n;
   scanf("%d", &n);
   nhap(arr,n);
   sxTangDan(arr,n);
   hienThi(arr,n);
   return 0;
}

