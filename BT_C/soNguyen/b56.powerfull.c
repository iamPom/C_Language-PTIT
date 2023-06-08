#include<stdio.h>

int sont(int n){
	int dem = 0;
	int i;
	for(i = 1; i <= n; i++){
		if(n % i == 0) dem++;
	}
	if(dem == 2) return 1;
	else return 0;
}

int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	int to, nho;
	if(a < b){
		to = b;
		nho = a;
	}
	else{
		to = a;
		nho = b;
	}
	int i, j;
	for(i = nho; i <= to; i++){
			for(j = 2; j <= b; j++){
				if(sont(j)){
				   if(i % j == 0 && i % (j*j) == 0) {
				   printf("%d ", i);
				   break;
					}
			    }
		    }
	}
	return 0;
}
