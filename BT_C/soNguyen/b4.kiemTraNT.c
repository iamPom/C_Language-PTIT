#include<stdio.h>
#include<math.h>

int main(){
 	int n,i;
 	scanf("%d",&n);
 	
 	if(n<2){
 		printf("0");
 		return 0;
	 }
	 for(i=2;i<=sqrt(n);i++){
	 	if(n%i==0){
	 		printf("0");
	 		return 0;
		 } 
	 }printf("1 ");
	return 0;
}

