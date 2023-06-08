#include <stdio.h>

int main() {
	 int n;

	scanf("%d", &n);
	
	if(n < 2) {
		printf("Nhap n > 1");
	} else {
	    int i = 2;
		while(n > 1) {
			if(n % i == 0) {
				printf("%d", i);
				if(n != i) {
					printf("x");
				}
				n /= i;
			} else {
				i++;
			}
		}
	}
	
	return 0;
}
