
#include <stdio.h>
#include <ctype.h>

int main()
{
	int n,reverse=0,remainder;
	scanf("%d",&n);
	if(n < 1000 && n > 99){
		while(n!=0){
		remainder= n % 10;
		reverse= reverse * 10 + remainder;
		n=n/10;
	}
	printf("reverse number is %d ",reverse);
		
		
	}
	return 0;
}
