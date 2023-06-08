#include<stdio.h>
#include<string.h>

int main(){
	char a[100];
	gets(a);
	int n=strlen(a)-1;
	int i,count=0;
	for(i=0;i<n;i++){
		if((a[i]!=' '&& a[i+1]==' ')||(a[i]!=' '&&a[i+1])!=' '&&i+1==n)
		 count++;//dem so luong tu trong cau
	}//printf("%d  %d ",n,count);
	
	strlwr(a);
	char b[100][100];
	char *p=strtok(a," ");
	 i=1; 
	while(p!=0){
		p[0]-=32;
		strcpy(b[i],p);
		i++;
		p=strtok(NULL, " ");
	}
	printf("%s, ",strupr(b[count]));
	for(i=1;i<count;i++){
		//if(i>=2&&i<count) 
		printf("%s ",b[i]);
		//else { 
			//if(i==count)
//			 printf("%s, ",b[i]);
//			else printf("%s",strupr(b[i]));
//		}
	}
	//printf("%s",strupr(b[1]));
	
	return 0;
}

