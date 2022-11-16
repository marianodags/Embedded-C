#include <stdio.h>
#include <ctype.h>

int main()
{
int n;
	scanf("%d",&n);
	
	if(3 <= n && n < 8.5){
		printf("A ");
	}else{
		printf("not A ");
	}
	
	if(n < 3 || (5.4 < n && n <= 7.3) || n > 13){
		printf("B ");
	}else{
		printf("not B ");
	}
	
	if(n != 3 && n < 9.75){
		printf("C ");
	}else{
		printf("not C ");
	}
	
	return 0;
}





