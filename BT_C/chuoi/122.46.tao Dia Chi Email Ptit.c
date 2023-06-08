#include<stdio.h>
#include<string.h>


int main(){
	char a[100];
	gets(a);
	int i,count=0,n=strlen(a);
	strlwr(a);
	for(i=0;i<n;i++){
		if((a[i]!=' '&&a[i+1]==' ')||(a[i]!=' '&&a[i+1]!=' '&&i+1==n-1)) count++;
	} //printf("%d   ", count);
	
	char b[100][100];
	char *p=strtok(a," ");

	while(p!=0){
		for(i=1;i<=count;i++){
			if(i<count) strncpy(b[i],p,1);
			else 
			strcpy(b[count],p);	
			p=strtok(NULL," ");		
		}p=strtok(NULL," ");
	}
	printf("%s",b[count]);//bai A va B chi khac nhau thu tu in thoi
	for(i=1;i<count;i++){
			 printf("%s",b[i]);
		}
		printf("@ptit.edu.vn");
	return 0;
}

