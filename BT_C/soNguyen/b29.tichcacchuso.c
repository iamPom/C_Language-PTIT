#include<stdio.h>

int main(){
   int n, i, tich;
   scanf("%d", &n);
   tich = 1;
   while(n > 0){
   	tich *= (n % 10);
   	n /= 10;  	
   } printf ("%d", tich);
   return 0;
}

