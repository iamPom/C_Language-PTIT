#include<stdio.h>
#include<stdbool.h>
#include<math.h>

bool ktraNgTo(int n) {
	if(n < 2){
		return false;
	}
	int i;
	for(i = 2; i <= sqrt(n); i++) {
		if(n % i == 0) {
			return false;
		}
	}
	return true;
}
bool chuSoChiaHetCho5(int n){
	int tong=0;
    while(n>0){
    	tong += n%10;
    	n/=10;
	}	if(tong%5==0){
		return true;
	}else return false;
}
int main(){
   int a, i, count=0;
   scanf("%d", &a);
   for(i=2; i<=a; i++){
   	  if(ktraNgTo(i)&& chuSoChiaHetCho5(i)){
   	  	printf("%d ", i);
		 count++;
		 }
   } printf("\n%d", count);
   return 0;
}

