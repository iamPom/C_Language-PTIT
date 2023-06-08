#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main(){
	char a[100];
	fgets(a,100,stdin);
	int i,demSo=0,demChu=0,demKiTuDb=0;
	int c=strlen(a)-1;
	for(i=0;i<c;i++){
		if(isdigit(a[i])){
			demSo++;
		}else{
			if(isalpha(a[i])){
				demChu++;
			}else demKiTuDb++;
		}
	}
	printf("%d %d %d",demChu,demSo,demKiTuDb);
	return 0;
}

