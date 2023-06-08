#include<stdio.h>
#include<math.h>

int tangDan(int n){
	int a, b;
	while(n>=10){
		a=n%10;
		n/=10;
		b=n%10;
		if(b>=a){
			return 0;
		}
	}return 1;
}
int giamDan(int n){
	int a, b;
	while(n>=10){
		a=n%10;
		n/=10;
		b=n%10;
		if(b<=a){
			return 0;
		}
	}return 1;
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

int main(){
    int i, n, count=0;
    scanf("%d", &n);
    for(i=pow(10,n-1);i<pow(10,n);i++){
    	if(ngTo(i)){
    		if(tangDan(i)||giamDan(i)){
    			count++;
    			//printf("%d ", i);
			}
		}
	}printf("%d", count);
   return 0;
}

