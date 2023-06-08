#include<stdio.h>

int thuanNghich(int n){
	if(n<10) return 0;
	int dao=0, m;
	m =n;
	while(m>0){
		dao = dao*10+m%10;
		m/=10;
	} if(dao == n){
		return 1;
	}else return 0;
}
void nhap(int arr[], int n){
	
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
}
void demVaInThuanNghich(int arr[100],int n){
	int count=0,i;
	for(i=0;i<n;i++){
		if(thuanNghich(arr[i])) count++;
	}
	printf("%d ", count);
	for(i=0;i<n;i++){
		if(thuanNghich(arr[i])) printf("%d ", arr[i]);
	}
} 
int main(){
   int arr[100],n;
   scanf("%d", &n);
   nhap(arr,n);
   demVaInThuanNghich(arr,n);
   return 0;
}

