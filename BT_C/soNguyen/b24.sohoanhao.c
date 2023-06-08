#include<stdio.h>

int main(){
   int n, i;
   int tong = 0;
   scanf("%d", &n);
   for(i = 1; i < n; i++){
     if( n % i == 0)
      tong += i;
      }
    if (tong == n) printf("1");
    else printf ("0");
   return 0;
}

