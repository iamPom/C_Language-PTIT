#include<stdio.h>

void nhap(int a[],int n){
	int i;
	for(i=0;i<n;i++){
	scanf("%d",&a[i]);
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
			}
		}
	}
}
void out(int a[],int n){
	int i;
	for(i=0;i<n;i++){
		 printf("%d ",a[i]);
	}
}
int main(){
	int a[100],b[100],c[100],n;
	scanf("%d",&n);
	int i,j=0,k=0;
	nhap(a,n);
	for(i=0;i<n;i++){
		if(a[i]%2==0){
			b[j]=a[i];
			j++;
		} else{
			c[k]=a[i];
			k++;
		}		
	}
	sxTangDan(b,j);
	sxTangDan(c,k);
	out(b,j);
	out(c,k);
	return 0;
}

