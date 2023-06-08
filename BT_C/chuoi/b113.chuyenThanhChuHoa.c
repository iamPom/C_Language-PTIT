#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
	char a[100];
	fgets(a,100,stdin);
	int i;
	for(i=0;i<100;i++){
		if(96<a[i]&&a[i]<123){
			a[i]-=32;
		}
	}
	printf("%s",a);
	return 0;
}

