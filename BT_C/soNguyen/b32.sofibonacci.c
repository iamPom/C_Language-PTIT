#include<stdio.h>

int main(){
   int n, i, f1 = 1, f0 = 0, fn = 0;
   scanf("%d", &n);
   if(n <= 0)printf("nhap n > 0");
   else{ printf("0 1 ");
     for(i = 0; i < n - 2; i++){
       fn = f0 + f1;
       f0 = f1;
       f1 = fn;
       printf("%d ", fn);
     }
    }
   return 0;
}

