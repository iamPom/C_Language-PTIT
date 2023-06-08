#include<stdio.h>

int main(){
	int n,m,i,j;
	scanf("%d%d",&n,&m);
	int a=1;
	int b=a;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d", a);
			a++;
			if(a>m) a=m;
		}printf("\n");
		b++;
		if(b>m) b=m;
		a=b;	
	} 
	return 0;
}

