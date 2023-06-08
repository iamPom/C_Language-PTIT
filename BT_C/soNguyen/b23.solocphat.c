#include<stdio.h>

int main(){
   int n, du;
   scanf("%d", &n);
   while(n > 0){
    du = n % 10;
      
    if( du == 6 || du == 8 || du == 0){
    	n /= 10;
    	printf ("1");
		}
    else 
        printf("0");
        break;
    }
   
   return 0;
}

