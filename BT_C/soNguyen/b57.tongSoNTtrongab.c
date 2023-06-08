#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool ngTo(int n) {
	if(n < 2){
		return false;
	}
	int i;
	for(i = 2; i <= sqrt(n); i++) {
		if(n % i == 0) {
			return false;
		}
	}
	return true;
}

int main() {
	int a, b, max, min;
	int sum = 0;
	scanf("%d%d", &a, &b);
	if(a >= 0 && b >= 0) {
		if( a > b){
		  max = a;
		   min = b;
		} else{
		   min = a;
		   max = b;
		}
		int i;
		for(i = min; i <= max; i++) {
			if(ngTo(i)) {
				sum += i;
			}
		}
		printf("%d", sum);
	} else {
		printf("Nhap a, b la so duong");
	}
	
	return 0;
}
