#include<stdio.h>

int main(){
   int a, b, n;
   scanf("%d", &n);
   if(n>0){
   	   b = n%10;
   	   while(n>0){
   	  	  a = n%10;
   	  	  n/=10;
		}
   } printf("%d %d", a, b);
   return 0;
}

