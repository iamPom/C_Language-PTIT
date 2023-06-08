#include<stdio.h>
#include<math.h>

int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	int i, j;
	if(a < 0) printf("nhap a, b duong");
	else{
		for(i = a; i <= b; i++){
		   	for(j = 2; j <= sqrt(b); j++){
			   if(i % j == 0){ 
			     break;		   
				} printf("%d", i);
			} 
		}
	}
	

	
	return 0;
}
