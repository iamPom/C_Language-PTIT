#include<stdio.h>

int main(){
   int n, m, dao;
   scanf("%d", &n);
   m = n;
   dao = 0;
    while(m > 0){
     dao = dao * 10 + m % 10;
     m /= 10;
    } 
    printf("%d", dao);
   return 0;
}

