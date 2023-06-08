#include<stdio.h>
#include<math.h>

int thuanNghich(int n){
	int dao=0, m=n;
	while(m>0){
		dao = dao*10 + m%10;
		m/=10;
	}if(dao==n){
		return 1;
	}else return 0;
}
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
int baUocNt(int n){
	int i, count=0;
	int m=n/2;
	for(i=2; i<=m;i++){
		if(n%i==0){
		  if(ngTo(i)){
		   count++;
		  }
	    }
		   	 
		}
	if(count>=3){
		return 1;
	}else return 0;
}
//int 3uocNt(int n){
//	int i, count=0;
//	int c=ktraNt(n);
	

int main(){
   int i, a, b, min, max;
    scanf("%d%d", &a, &b);
    min=a;
    max=b;
   if(a>b){
   	  min=b;
   	  max=a;
   }
   for(i=min;i<=max;i++){
   	  if(thuanNghich(i)&& baUocNt(i)){
   	  	printf("%d ", i);
		 }
   }
   return 0;
}

