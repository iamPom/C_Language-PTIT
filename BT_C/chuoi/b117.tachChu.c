#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
	char a[100];
	fgets(a,100,stdin);
	int c=strlen(a)-1;
	int i;
	for(i=0;i<c;i++){
		if(isblank(a[i])==0){
			printf("%c",a[i]);
		}else printf("\n");
	}
	return 0;
}


