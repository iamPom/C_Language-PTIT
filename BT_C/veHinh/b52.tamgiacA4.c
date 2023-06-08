#include<stdio.h>

int main(){
	int m, n;
	scanf("%d%d", &m, &n);
	int i, j, t, t2;
	for(i = m - 1; i >= 0; i--){
		for(j = n - 1; j >= 0; j--){
			t = (i > j) ? j : i;
			t2 = (m > n ) ? m : n;
			printf("%d", t2 - t);
		}
		printf("\n");
	}
	return 0;
}
