#include<stdio.h>
#include<stdbool.h>

bool ktraStrong(int n){
	int gt, tongGt, i, c, m;
	m=n;
	gt = 1;
	tongGt = 0;
	while(m>0){
		c = m%10;
		m /=10;
	   for(i = 1; i <= c; i++){
		   gt *= i;
	    } tongGt += gt;
	     gt = 1;
	      
      }	  if (tongGt != n){
		   return false; 
   } return true;
}
int main(){
   int a, b, min, max, i, count = 0;
   scanf("%d%d", &a, &b);
   if(a>0 && b>0){
   	  if(a > b){
   	  	max=a;
   	  	min=b;
		 }else{
		 	max=b;
		 	min=a;
		 }
   }else{
   	printf("nhap a,b > 0!");
   }
   for(i= min; i<= max; i++){
   	  if(ktraStrong(i)){
   	  	 printf("%d ", i);
   	  	 count++;
		}		 
   }
   if(count==0)
   printf("0");
   return 0;
}

