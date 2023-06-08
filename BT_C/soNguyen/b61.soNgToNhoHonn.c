#include<stdio.h>
#include<math.h>
#include<stdbool.h>

   int nhapN(){
       int n;
       while(n<=0){
          scanf("%d", &n);
	    }
	    return n;
    }
    
    bool soNgTo(int n){
		int i;
		for(i = 2; i <= sqrt(n); i++){
			if(n % i == 0){
			  return false;
		    }
		}	
		return true;
	}
int main(){
	int n, i;
    n = nhapN();
    for(i = 1; i < n; i++) {
       if(soNgTo(i)){
       	printf("%d ", i);
	   }
	}
	
   return 0;
}

