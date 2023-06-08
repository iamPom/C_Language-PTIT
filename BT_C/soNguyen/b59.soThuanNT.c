#include<stdio.h>
#include<stdbool.h>
#include<math.h>

bool soNT(int n){
	if(n < 2){
		return false;
	}
	int i;
	for(i=2; i <= sqrt(n);i++){
		if(n % i == 0){
			return false;
		}		
	}
    return true;	
}
bool csNT(int n){
	int c;
	while(n > 0){
		c = n % 10;
		n /= 10;
		if(!soNT(c)){
	 	   return false;
		 }
	} 
	return true;	
}
bool tongCsNT(int n){
	int sum = 0;
	while(n > 0){
		sum += n%10;
		n /= 10;
		
		}if(soNT(sum)){
			return true;
	}
	return false;
	
}
int main(){
   int min, max, i, a, b;
   scanf("%d%d", &a, &b);
   if(a>b){
   	  min = b;
   	  max = a;
   } else{
   	  min = a;
   	  max = b;
   }
   int dem=0;
   for(i = min; i <= max; i++){
   	  if(soNT(i)&&csNT(i)&&tongCsNT(i)){
   	  	 dem++;
   	  	 
	  }
   }printf("%d", dem);
   return 0;
}

