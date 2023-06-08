#include<stdio.h>

void maTranXoanOc(int arr[][100],int n){
	int i,j,gt=n*n,d=0,hang=n-1,cot=n-1;
	while(d<=n/2){
		for(i=d;i<=cot;i++){
			arr[d][i]=gt--;
		}				
		for(i=d+1;i<=hang;i++){
			arr[i][cot]=gt--;
		}
		for(i=cot-1;i>=d;i--){
		    arr[hang][i]=gt--;
		}
		for(i=hang-1;i>d;i--){
			arr[i][d]=gt--;
		}
		d++;
		hang--;
		cot--;
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d ",arr[i][j]);
		}printf("\n");		
	}
}
int main(){
   int arr[100][100],n;
   scanf("%d",&n);
   maTranXoanOc(arr,n);
   return 0;
}

