#include<stdio.h>

int main(){
   int n, i, gt, tongGt, a, j;
   scanf("%d", &n);
   gt = 1;
   tongGt = 0;
   if(n <= 0) printf("nhap n>0");
   else{
   	 for(j = 1; j <= n; j++){
       while (j > 0){
          a = j % 10;
          j /= 10; 
          for (i = 1; i <= a; i++){
             gt *= i;
           }  tongGt += gt; 
		     if (tongGt == j){
                             
              gt = 1;
			  printf("%d ", j);
             }
        }
	  }     
    }
  
   return 0;
}

