#include<stdio.h>
#include<math.h>
int ktraNgTo(int n){
	if(n<2){
		return 0;
	}
	int i;
	for(i=2; i<=sqrt(n);i++){
		if(n%i==0){
			return 0;
		}
	}return 1;
}
int csCuoiMax(int n){
	int a, b, i;
	b = n%10;
	n/=10;
    while(n>0){
    	a=n%10;
    	n/=10;
    	if(b<a){
    		return 0;
		}
	}return 1;
}
int main(){
   int n, i, count=0;
   scanf("%d", &n);
   for(i=2;i<n;i++){
   	   if(ktraNgTo(i)&&csCuoiMax(i)){
   	   	 printf("%d ", i);
   	   	 count++;
		  }
   }printf("\n%d", count);
   return 0;
}

