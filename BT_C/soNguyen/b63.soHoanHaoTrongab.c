#include<stdio.h>
#include<stdbool.h>

bool ktraSohoanhao(int n){
	int tong, i;
	tong=0;
	int m = n/2;
	for(i=1;i<=m;i++){
		if(n%i==0){
	   		tong+=i;
	   	}
	}
	  
	if(tong==n){
		return true;
	}else {
		return false;
	}
}
int main(){
   int min, max, b, a, i;
   scanf("%d%d", &a, &b);
    min =a;
   	max=b;
   if(a>b){
   	   min =b;
   	   max=a;
   }
   for(i=min; i<=max;i++){
   	  if(ktraSohoanhao(i)){
   	  	  printf("%d ", i);
		 }
   }
   return 0;
}

