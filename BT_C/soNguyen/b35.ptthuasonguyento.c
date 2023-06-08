#include<stdio.h>

int main(){
   int n,i;
   scanf("%d", &n);
   for (i = 2; i <= n; i++){
      if(n % i == 0){
    	  int a = i;
    	  while( i <= a){
		     if(n % i == 0){
		        n /= i;
		     } else i++;
		    }   	
             i--;
	          printf("%d ", i);
	 	}
	} 
    
   return 0;
}

