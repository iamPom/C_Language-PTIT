#include<stdio.h>

int main(){
   char c,i;
   scanf("%c", &c);
   if((c>64&&c<91)||(c>96&&c<123)){
   	printf("1");
   }
//   if(){
//   	printf("1");
//   }
else printf("0");
   return 0;
}

