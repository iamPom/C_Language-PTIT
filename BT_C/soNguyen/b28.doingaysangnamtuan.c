#include<stdio.h>

int main(){
   int n, nam = 0, tuan = 0, ngay = 0;
   scanf("%d", &n);
    nam = n / 365;
    tuan = (n - nam * 365) / 7;
    ngay = (n - nam * 365 - tuan * 7);
   
   printf ("%d %d %d", nam, tuan, ngay);
   return 0;
}

