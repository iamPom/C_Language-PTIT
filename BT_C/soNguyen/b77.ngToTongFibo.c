#include<stdio.h>
#include<math.h>

int ngTo(int n) {
	if(n < 2){
		return 0;
	}
	int i;
	for(i = 2; i <= sqrt(n); i++) {
		if(n % i == 0) {
			return 0;
		}
	}
	return 1;
}
int tongCs(int n){
	int tong=0;
	while(n>0){
		tong+=n%10;
		n/=10;
	}return tong;	
}

int ktraFibo(int n){
	int tong=tongCs(n), f0=0, f1=1, fn=0;
	while(tong-fn>0){
		fn=f0+f1;
		f0=f1;
		f1=fn;
		if(tong-fn==0){
			return 1;
		}
	}return 0;
}
int main(){
   int i,j, a, b, min, max;
    scanf("%d%d", &a, &b);
    if(a<0 || b <0){
    	printf("nhap a,b>0");
	}else{
	  min=a;
      max=b;
      if(a>b){
   	    min=b;
   	    max=a;
      }

      for(i=min; i<=max; i++){ 
                if (ngTo(i)&&ktraFibo(i)){				
        		 printf("%d ", i);
			   }
		} 	          
	}
   return 0;
}

