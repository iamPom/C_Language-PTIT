#include<stdio.h>
#include<math.h>

int testNto(int n){
	if (n<2) return 0;
	int i;
	for(i=2;i<=sqrt(n);i++){
		if(n%i==0)return 0;		
	}
	return 1;
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
void lKeAndDem(int a[],int n){
	int i,j;
	for(i=0;i<n;i++){
		int count=1;
		int test=1;
		for(j=0;j<n;j++){
			if(i==j) continue;
			if(i>j&&a[i]==a[j]) test=0;
			if(i<j&&a[i]==a[j]) count++;
		} if(test==1&&testNto(a[i])==1)
		printf("%d %d\n",a[i],count);
		count=1;
	}
}
int main(){
	int a[100],n;
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	sxTangDan(a,n);
	lKeAndDem(a,n);
	return 0;
}

