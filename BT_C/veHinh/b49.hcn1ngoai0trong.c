#include<stdio.h>

int main(){
   int m, n, i, j;
   scanf("%d%d", &m, &n);
   for(i = 0; i < m; i++){
      for(j = 0; j < n; j++){
	     if( i > 0 && i < m - 1 && j > 0 && j < n -1 )
	      printf("0");
	      else printf("1");
	    } printf("\n");
    }
   return 0;
}

