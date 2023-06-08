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
void demSoNT(int a[][100],int n){
	int i,j,count=0,c[100][100];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i==j || j == n-1-i){
				if(ktraNgto(a[i][j])){
					count++;
				}				
			}
		}
	}
	
	printf("%d",count);
}
int main(){
	int a[100][100],n;
	scanf("%d",&n);
	nhap(a,n);
	demSoNT(a,n);
	return 0;
}

