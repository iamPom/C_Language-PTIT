#include<stdio.h>

int thuanNghich(int n){
	int dao=0, m=n;
	while(m>0){
		dao = dao*10 + m%10;
		m/=10;
	}if(dao==n){
		return 1;
	}else return 0;
}
int chua6(int n){
	int c;
	while(n>0){
		c=n%10;
		if(c==6){
			return 1;
		}
		n/=10;
	} return 0;
}
int tongCuoiLa8(int n){
	int tong=0;
	int m=n;
	while(m>0){
		tong+=m%10;
		m/=10;
	}if(tong%10==8){
		return 1;
	}else return 0;
}
int main(){
   int i, a, b, min, max;
   scanf("%d%d", &a, &b);
   min=a;
   max=b;
   if(a>b){
   	min=b;
   	max=a;
   }
   for(i=min; i<=max;i++){
   	 if(thuanNghich(i)&&chua6(i)&&tongCuoiLa8(i)){
   	 	printf("%d ", i);
		}
   }
   return 0;
}

