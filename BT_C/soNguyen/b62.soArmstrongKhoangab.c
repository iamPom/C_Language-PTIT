#include<stdio.h>
#include<stdbool.h>

int demSocs(int n){
	int count = 0;	
	while(n>0){
		 n/=10;
		 count++;
	}
    return count;
}
bool ktraSoArmstrong(int n){
	int i, gt, c, tongMu;
	int count = demSocs(n);
	tongMu=0;
	int m=n;
	gt=1;
	while(m>0){
		c = m%10;
		m /=10;
	    for(i=0; i<count; i++){
		  gt *= c;
	    }   tongMu +=gt;
	    gt=1;
    } if(tongMu!=n){
    	return false;
	  }else{
	  	return true;
	  }
}
int main(){
   int i, a, b, min, max;
   scanf("%d%d", &a, &b);
//   if(ktraSoArmstrong(a)){
//   	printf("1");
//	   }
//   	else{
//	   printf("0");
//	   }
   	if(a>b){
   		max=a;
   		min =b;
	   }else{
	   	min=a;
	   	max=b;
	   }

     for(i=min; i <= max; i++){
   	  if(ktraSoArmstrong(i)){
   	    printf("%d ", i);
      }
    }  

   return 0;
}
