#include<stdio.h>

int main(){
   int m, n, i, j;
   scanf("%d%d", &m, &n);
   for(i=1; i<=m; i++){
   	  int x =i;
      for(j=1; j<=n; j++){
	     printf("%d", x++);
	  } printf("\n");
	   
   }
   return 0;
}
