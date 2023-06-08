#include<stdio.h>
#include<math.h>

int main(){
	int a[100],n;
	scanf("%d",&n);
	int i,c,j;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}	
	int min=69,min1,min2;
	for(i=0;i<n;i++){
		for	(j=i+1;j<n;j++){
			if(min>abs(a[i]-a[j])){
			min=abs(a[i]-a[j]);
			min1=a[j];
			min2=a[i];
			}			
		}
	}
	printf("%d %d %d",min, min1,min2);
	return 0;
}
