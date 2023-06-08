#include<stdio.h>

int main(){
	int n,chan=0,le=0;
	scanf("%d",&n);
	while(n>0){
	int	a=n%10;
		n/=10;
		if(a%2==0) chan++;
		else le++;
	}
	printf("%d %d", le,chan);
	return 0;
}

