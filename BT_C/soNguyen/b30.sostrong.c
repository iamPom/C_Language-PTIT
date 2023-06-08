#include<stdio.h>

int main(){
   int n, i, gt, tongGt, a, m;
   scanf("%d", &n);
   gt = 1;
   tongGt = 0;
   m = n;
   if(m <= 0) printf("0");
   else{
   while (m > 0){
     a = m % 10;
     m /= 10; 
     for (i = 1; i <= a; i++){
         gt *= i;
       }  tongGt += gt;
      gt = 1;
    }     
   if (tongGt == n){
     printf("1");
       }else printf ("0");
    }
  
   return 0;
}

