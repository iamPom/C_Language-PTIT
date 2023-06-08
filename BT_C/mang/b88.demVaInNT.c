#include<stdio.h>
#include<math.h>

void nhap(int arr[], int n){
	
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
}
int ktraNgto(int n){
    int i;
	if(n<2) return 0;
    
    for(i=2;i<=sqrt(n);i++){
    	if(n%i==0){
    		return 0;
		}
	}return 1;
}
void demVaInNt(int arr[100],int n){
	int count=0,i;
	for(i=0;i<n;i++){
		if(ktraNgto(arr[i])) count++;
	}
	printf("%d ", count);
	for(i=0;i<n;i++){
		if(ktraNgto(arr[i])) printf("%d ", arr[i]);
	}
} 
int main(){
   int arr[100], n;
   scanf("%d", &n);
   nhap(arr,n);
   demVaInNt(arr,n);
   return 0;
}

