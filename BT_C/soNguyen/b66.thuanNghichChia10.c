#include<stdio.h>
#include<math.h>
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
int chiaHet10(int n){
	int m=n;
	int c=0;
	while(m>0){
		c+= m%10;
		m/=10;
	}if(c%10==0){
		return 1;
	}else return 0;
}
int main(){
   int a, i,count=0;
   scanf("%d",&a);
   for(i=pow(10,a-1);i<pow(10,a);i++){
   	if(thuanNghich(i)&&chiaHet10(i)){
   		count++;
	   }
   }printf("%d", count);
   return 0;
}

