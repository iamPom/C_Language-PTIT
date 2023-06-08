#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
	char a[100];
	fgets(a,100,stdin);
	int c=strlen(a)-1;
	int i;
	for(i=c-1;i>=0;i--){
		if(a[i]!=' '){
			printf("%c ",a[i]);
		}
	}
	return 0;
}

