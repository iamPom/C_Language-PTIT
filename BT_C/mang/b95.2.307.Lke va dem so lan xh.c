#include<stdio.h>

void lKeAndDem(int a[],int n){
	int i,j;
	for(i=0;i<n;i++){
		int count=1;
		int test=1;
		for(j=0;j<n;j++){
			if(i==j) continue;
			if(i>j&&a[i]==a[j]) test=0;
			if(i<j&&a[i]==a[j]) count++;
		} if(test==1)
		printf("%d %d\n",a[i],count);
		count=1;
	}
}
int main(){
	int a[100],n;
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	lKeAndDem(a,n);
	return 0;
}

