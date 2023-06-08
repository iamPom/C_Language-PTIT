#include<stdio.h>
#include<string.h>

int main(){
	char a[100];
	fgets(a,100,stdin);
	int n=strlen(a);
	int i,count=0;
	for(i=0;i<n;i++){
		if(a[i]==' '&&a[i+1]!=' '||(a[i]!=' '&&a[i+1]!=' '&&i+1==n-1))
		 count++;
	}
	printf("%d",count);
	return 0;
}

