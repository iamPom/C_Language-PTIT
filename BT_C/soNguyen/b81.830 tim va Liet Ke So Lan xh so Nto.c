#include<stdio.h>
#include<math.h>

int testNto(int n){
	if(n<2) return 0;
	int i;
	for(i=2;i<=sqrt(n);i++){
		if(n%i==0)
		return 0;
	} return 1;
}
void lKeAndDem(int a[],int n){
	int i,j;
	for(i=0;i<n;i++){
		int count=1;
		int test=1;
		for(j=0;j<n;j++){
			if(i==j) continue;
			if(i>j&&a[i]==a[j]) test=0;
			if(i<j&&a[i]==a[j]) count++;
		} if(test==1&&testNto(a[i])!=0)
		printf("%d %d\n",a[i],count);
		count=1;
	}
}
int main(){
	int a[100],n;
	scanf("%d",&n);
	int m=n,i,soCs=0;
	while(m>0){
		m/=10;
		soCs++;
	}
	for(i=soCs-1;i>=0;i--){
		int b=n%10;
		a[i]=b;
		n/=10;
	}
	lKeAndDem(a,soCs);
	return 0;
}
