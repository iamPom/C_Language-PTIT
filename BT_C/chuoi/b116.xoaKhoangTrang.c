#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
	char a[100];
	fgets(a,100,stdin);
	int c=strlen(a)-1;
	int i;
	for(i=0;i<c;i++){
		if(isblank(a[i])!=0){
			int j;
			for(j=i;j<c;j++){
				a[j]=a[j+1];
			}
			i--;
		}
	}
	puts(a);
	return 0;
}

