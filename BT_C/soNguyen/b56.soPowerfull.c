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
int chiaHetMoiNt(int n){
	int i;
	for(i=2;i<=n;i++){
		if(n%i==0){
			if(ngTo(i)){
				if(n%(i*i)==0){
					return 1;
				}								
			}				
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
                if (chiaHetMoiNt(i)){				
        		 printf("%d ", i);
			   }
		} 	          
	}
   return 0;
}

