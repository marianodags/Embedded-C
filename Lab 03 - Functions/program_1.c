#include <stdio.h>
#include <ctype.h>

int main()
{
	char a;
	scanf("%c",&a);
	
	if(isalnum(a)){
		
		if(islower(a)){
			printf("lower case");
		}else if(isupper(a)){
			printf("upper case");
		}else if(isdigit(a)){
			printf("numeric");
		}
		
	}
		
	else{
	printf("not alphanumeric");
}
	
	return 0;
}

