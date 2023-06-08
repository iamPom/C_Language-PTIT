#include<stdio.h>
#include<math.h>

void nhap(int a[100][100],int n){
	int i,j;
	for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				scanf("%d",&a[i][j]);
			}
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
void tongNTtamGiacTren(int a[100][100],int n){
		int tong=0,i,j;
		for(i=0;i<n;i++){
			for(j=n-1;j>=i;j--){
				if(ktraNgto(a[i][j])){
					tong+=a[i][j];
				}
			}
		}
		printf("%d ",tong);
}
int main(){
	int a[100][100],n;
	scanf("%d",&n);
	nhap(a,n);
	tongNTtamGiacTren(a,n);
	return 0;
}
