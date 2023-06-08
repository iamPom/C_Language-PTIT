#include<stdio.h>
#include<string.h>

int kTraChu(char b[100]){
	int i;
	for(i=0;i<strlen(b);i++){
		if('a'<b[i]&&b[i]<'z'){
			return 0;
		}
	}
	return 1;
}
int main(){
	char a[100];
	gets(a);
	char *tuVietHoa=strtok(a," ");
	int i;
	while(tuVietHoa!=0){
		if (kTraChu(tuVietHoa)==1){	
		printf("%s ", tuVietHoa);
		}	
		tuVietHoa=strtok(NULL," ");
	}
	
	return 0;
}

