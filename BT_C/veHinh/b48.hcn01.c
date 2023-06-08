#include<stdio.h>

int main(){
    int m, n, i, j;
   scanf("%d%d", &m, &n);
   for(i = 1; i <= m; i++){
      for(j = 1; j <= n; j++){
      	 if(j % 2 == 1)
		   printf("0");
		  else printf("1");
	    } printf("\n");
    }
   return 0;
}

