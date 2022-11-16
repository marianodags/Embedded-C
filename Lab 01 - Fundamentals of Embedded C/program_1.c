
#include <stdio.h>
#include <ctype.h>

int main()
{

	float hh,mm,ss;
	scanf("%f\n",&hh);
	scanf("%f\n",&mm);
	scanf("%f",&ss);
	
	printf("The entered time is: %.2f hours %.2f minuted %.2f seconds",hh,mm,ss);
return 0;	
}

