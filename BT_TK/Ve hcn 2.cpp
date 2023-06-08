/*Vi?t chuong trình C cho phép nh?p vào s? hàng và s? c?t c?a hình ch? nhât. Th?c hi?n in ra hình ch? nh?t theo nguyên t?c tuong ?ng.
INTPUT
5 5
OUTPUT
55555
44445
33345
22345
12345
Ho?c
INPUT
4 6
OUTPUT
666666
555556
444456
333456
Ho?c
INPUT
6 4
OUTPUT
6666
5556
4456
3456
3456
3456 */
#include <stdio.h> //Author by Quan dep trai
int main()
{
	int i,j,n,m,tong;
	scanf("%d%d",&n,&m);
	if(m>=n)
	  tong=m;
	else tong=n;  
	for(i=0;i<n;i++){
		for(j=m-1;j>=0;j--){
			if(j>=i)
			  printf("%d",tong-i);
			else printf("%d",tong-j);  
		}
		printf("\n");
	}
	return 0;
}
