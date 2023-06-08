#include<stdio.h>

int main(){
	int n,m,i,j,max,a;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++){
		a=i;
		for(j=m-1;j>=0;j--){
			if(j==m-1){printf("%d", i+1);
			}else {
				if(j>=i){
				printf("%d",m-j+i);				
				} else {if(i<m) printf("%d",m-i+j);
					else {
					printf("%d", a);
					a--;
					}
				}	
				
			}	
		}	
		printf("\n");
	}
	return 0;
}
