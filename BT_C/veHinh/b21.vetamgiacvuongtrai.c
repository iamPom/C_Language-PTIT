#include <stdio.h>

int main() {
	int h;
	scanf("%d", &h);
	
	if(h > 0) {
		int i, j;
		for(i = 1; i <= h; i++) {
			for(j = 1; j <= i; j++) {
				printf("*");
			}
			printf("\n");
		}
	} else {
		printf("0");
	}
	
	return 0;
}
