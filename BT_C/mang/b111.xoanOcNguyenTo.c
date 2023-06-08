#include<stdio.h>
#include<math.h>

int ktraNgto(int n){
    int i;
	if(n<2) return 0;
    
    for(i=2;i<=sqrt(n);i++){
    	if(n%i==0){
    		return 0;
		}
	}return 1;
}
void maTranXoanOc(int arr[][100],int n){
	int i,j,gt=1,d=0,hang=n-1,cot=n-1;
	while(d<=n/2){
		for(i=d;i<=cot;i++){
			for(gt;gt<100;gt++){
			if(ktraNgto(gt))
			arr[d][i]=gt;
			}			
		}
		for(i=d+1;i<=hang;i++){
			for(gt;gt<hang;gt++){
			if(ktraNgto(gt))
			arr[i][cot]=gt;
			}
		}
		for(i=cot-1;i>=d;i--){
			gt++;
			if(ktraNgto(gt))
		    arr[hang][i]=gt;
		}
		for(i=hang-1;i>d;i--){
			gt++;
			if(ktraNgto(gt))
			arr[i][d]=gt;
		}
		d++;
		hang--;
		cot--;
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}
int main(){
   int arr[100][100],n;
   scanf("%d",&n);
   maTranXoanOc(arr,n);
   return 0;
}
