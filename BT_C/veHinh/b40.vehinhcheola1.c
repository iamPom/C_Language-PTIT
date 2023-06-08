#include<stdio.h>

int main(){
   int i, j, n;
   scanf("%d", &n);
   for(i = 0; i < n; i++){
   	  int x = i+1;
   	  int k = 1;
   	
      for(j = 0; j < n; j ++){
      	if(i>0 && j<i){
      		printf("%d ", x-- );
		}else
	    printf("%d ",k++);
	  }
	  
	  printf("\n");
   }
   return 0;
}

