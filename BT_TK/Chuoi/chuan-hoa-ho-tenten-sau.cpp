#include<stdio.h>
#include<string.h>
int main(){
	char s[1000];
	gets(s);
	strlwr(s);
	char a[100][100];
	int i=1;
	char *p=strtok(s," ");
	while(p!=NULL){
		p[0]-=32;
	strcpy(a[i],p);
		p=strtok(NULL," ");
		i++;
	}
if(i<5){
	printf("%s ",a[1]);
	printf("%s",a[2]);
	printf(", ");
	printf("%s ",strupr(a[3]));
}
	

	if(i==5){
		printf("%s ",a[1]);
		printf("%s ",a[2]);
		printf("%s",a[3]);
		printf(", ");
		printf("%s ",strupr(a[4]));
	}
	}
