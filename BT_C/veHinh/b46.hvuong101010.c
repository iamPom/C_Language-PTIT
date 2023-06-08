#include<stdio.h>

int main(){
   int m, n, i, j;
   scanf("%d%d", &m, &n);
   for(i = 1; i <= m; i++){
      for(j = 1; j <= n; j++){
      	 if(i % 2 == 1){
	       if(j % 2 == 1)
	        printf("1");
	        else printf("0");
	     } else {
		     if(j % 2 == 1)
	         printf("0");
	         else printf("1");
		   }
	    } printf("\n");
    }
   return 0;
}
