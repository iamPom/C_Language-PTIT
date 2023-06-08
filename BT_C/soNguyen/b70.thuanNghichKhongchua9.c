#include<stdio.h>

int thuanNghich(int n){
	int dao=0, m;
	m =n;
	while(m>0){
		dao = dao*10+m%10;
		m/=10;
	} if(dao == n){
		return 1;
	}else return 0;
} 
int khongChua9(int n){
	int c;
	while(n>0){
		c=n%10;
		if(c==9){
			return 0;
		}
		n/=10;
	} return 1;
}
int main(){
   int n,i, count=0;
   scanf("%d", &n);
   for(i=2;i<n; i++){
   	 if(thuanNghich(i)&&khongChua9(i)){
   	 	printf("%d ", i);
   	 	count++;
		}
   }printf("\n%d", count);
   return 0;
}

