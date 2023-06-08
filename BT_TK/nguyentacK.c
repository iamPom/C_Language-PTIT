#include<stdio.h>

int main(){
	int n,i,j;
	scanf("%d",&n);
	int a=n-1;
	int b=1;
	int c=b;
	for(i=0;i<n;i++){
		for(j=0;j<=i;j++){
			if(j==0) printf("%d ",b);
			
			else{printf("%d ", c+a);
			c+=a; 
			a--;
			} 
		}b++;
		c=b;
		a=n-1; 
		printf("\n");
	}
	return 0;
}

