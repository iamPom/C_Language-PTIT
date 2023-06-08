#include<stdio.h>
#include<string.h>
int main(){
	char s[100];
	gets(s);
	int i = 1,max = 0,min = 99;
	char *tumin, *tumax;
	char *p = strtok(s," ");
	while( p != 0 ){
		
		if(strlen(p) > max){
			max = strlen(p);
			tumax = p;
		}
		if( strlen(p) < min){
			min = strlen(p);
			tumin = p;
		}	
		p = strtok(NULL," ");//tiep tuc tach
		
	}
		printf("%s %s",tumax,tumin);
}
