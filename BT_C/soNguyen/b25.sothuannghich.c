#include<stdio.h>

int main(){
   int n;
   scanf("%d", &n);
   int m = n;
   int dao = 0;
   while(m > 0){
     dao = dao * 10 + m % 10;
     m /= 10;
    } 
	if (dao == n){
       printf("1");
    }    else {printf("0");
       }
   return 0;
}

