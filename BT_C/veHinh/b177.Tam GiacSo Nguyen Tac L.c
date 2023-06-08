#include<stdio.h>

int main(){
	int n,i,j;
	scanf("%d",&n);
	int index=0;
	for(i=0;i<n;i++){
		if(i%2==0){
			index+=i+1;
			for(j=0;j<=i;j++){
				printf("%c ", 96+index++); //ve hinh theo chu chi can cong them 96 va thay doi dinh dang %c
			}			
		}else {
			index+=i;
			for(j=0;j<=i;j++){
				printf("%c ",96+index--);
			}
		}
		printf("\n");
	}
	return 0;
}

