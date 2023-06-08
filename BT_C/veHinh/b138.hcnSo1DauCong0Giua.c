#include<stdio.h>

int main(){
	int i,j,n,m;
	scanf("%d%d",&n,&m);
	int c=n/2;
	int d=m/2;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(n%2==0&&m%2==0){
				if(i==c-1||i==c) printf("0");
				else if(j==d-1||j==d) printf("0");
				else printf("1");
			}
			if(n%2==0&&m%2==1){
				if(i==c-1||i==c) printf("0");
				else if(j==d) printf("0");
				else printf("1");
			}
			if(n%2==1&&m%2==0){
				if(i==c) printf("0");
				else if(j==d-1||j==d) printf("0");
				else printf("1");
			}
			if(n%2==1&&m%2==1){
				if(i==c) printf("0");
				else if(j==d) printf("0");
				else printf("1");
			}
		} printf("\n");
	}
	return 0;
}

