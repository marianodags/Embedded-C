#include <stdio.h>
#include <ctype.h>

int main()
{
	char n;
	scanf("%c",&n);
	
	if(isdigit(n)){
		printf("numeric");
	}else{
		printf("not numeric");
	}
	
	return 0;
}





