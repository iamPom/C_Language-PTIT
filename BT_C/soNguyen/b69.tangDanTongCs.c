#include<stdio.h>

int tongCs(int n){
	int tong=0;
	while(n>0){
		tong+= n%10;
		n/=10;
	}return tong;
}
int main(){
   int a, b, min, max;
   scanf("%d%d", &a, &b);
   min = a; max =b;
   if(tongCs(a)>tongCs(b)){
   	min = b;
   	max=a;
   }
   printf("%d %d", min, max);
   return 0;
}

