#include<stdio.h>
#include<math.h>
int main(){
   int n, a, b, count=0;
   scanf("%d", &n);
   int m=n;
   if(n>0){
   	a = n%10;
   }
   while(n>0){
   	 b=n%10;
   	 n/=10;
   	 count++;
   }
   int doi = a*pow(10,count-1)+b+(m-a-b*pow(10,count-1));
   printf("%d", doi);
   return 0;
}

