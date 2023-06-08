#include<stdio.h>
#include<string.h>

int main(){
	char a[100];
	gets(a);
	int min=69,max=1;
	char *tuMin, *tuMax;
	char *tu=strtok(a," ");
	while(tu!=0){
		if(strlen(tu)>max){
			max=strlen(tu);
			tuMax=tu;
		}
		if(strlen(tu)<min){
			min=strlen(tu);
			tuMin=tu;
		} tu=strtok(NULL," ");
	}
	printf("%s %s", tuMax,tuMin);
	return 0;
}

