#include<stdio.h>
#include<math.h>

int main(){
	int n,m,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++){
	int a=-1;
	int b=2*i+1;
		for(j=0;j<n+i;j++){
			if(i<n-j-1) printf("~");
			else{ a+=2;
				if(j<n){
					printf("%d",a);
				}else {
					b-=2;
					printf("%d",b);
				} 
			}
		} printf("\n");
	}
	return 0;
}

