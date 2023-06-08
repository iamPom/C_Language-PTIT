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
int soDao(int n){
	int dao=0;
	int m=n;
	while(n>0){
		dao = dao*10 + n%10;
		n/=10;
	}if(dao<10 || dao == m){
		return 0;
	}else return dao;
}
int main(){
   int i, a, b, min, max;
    scanf("%d%d", &a, &b);
    if(a<0 || b <0){
    	printf("nhap a,b>0");
	}else{
	min=a;
    max=b;
   if(a>b){
   	  min=b;
   	  max=a;
   } for(i=min; i<max; i++){  	   
   	   if(ngTo(i)&&ngTo(soDao(i))){
   	   	   printf("%d ", i);
		  }
   }
	}
    
   return 0;
}

