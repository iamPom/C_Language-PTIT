#include <stdio.h> 
#include <math.h>

int main() {
	float a, c, b, delta, x1, x2, x;
	scanf("%f%f%f", &a, &b, &c);
	
	if(a == 0) {
		if(b == 0 && c != 0) {
			printf("NO\n");
		} else if(b == 0 && c == 0) {
			printf("Phuong trinh co vo so nghiem\n");
		} else {
			x = -c / b;
			printf("%0.2f", x);
		}
	} else {
		delta = b * b - a * c * 4;
		if(delta < 0) {
			printf("NO\n");
		} else if(delta == 0) {
			x1 = -b/(2 * a);
			printf("%0.2f", x1);
		} else {
			x1 = (-b + sqrt(delta)) / (2 * a);
			x2 = (-b - sqrt(delta)) / (2 * a);
			printf("%0.2f %0.2f", x1, x2);
		}
	}
	
	return 0;
}
