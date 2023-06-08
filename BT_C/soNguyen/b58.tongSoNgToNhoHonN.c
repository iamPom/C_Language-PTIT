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
    int sum = 0;
    for(i = 2; i < n; i++) {
    	if(soNgTo(i)){
    		sum += i;
		}
	}
	printf("%d", sum);
   return 0;
}

