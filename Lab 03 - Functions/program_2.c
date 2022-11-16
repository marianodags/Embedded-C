#include <stdio.h>
#include <ctype.h>

void recap(float w, float h){
	float area,perimeter;
	
	area= w*h;
	perimeter= 2*area;
	
	printf("%.1f\n%.1f\n",area,perimeter);
}



int main()
{
	float w=3,h=5;
	float a=6.8,b=2.3;
	recap(w,h);
	recap(a,b);


	
	return 0;
}

