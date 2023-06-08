#include<stdio.h>

int main(){
   int n, i, f1 = 1, f0 = 0, fn = 0;
   scanf("%d", &n);
   while(n-fn>0){
     for(i = 0; i < n; i++){
       fn = f0 + f1;
       f0 = f1;
       f1 = fn;
       if(n-fn==0){
        	printf("1");
        	return 0;
	    } 
      }printf("0");
    } 
   return 0;
}

