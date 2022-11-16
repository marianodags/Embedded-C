
int isLeapYear(int year){

	
	if(year % 4 == 0){
		return "Leap Year";
	}else{
		return "not Leap Year";
	}
	
}

int numberofDays(int m,int y){
	int m1;
	if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12){
		m1=31;
	}else if(m == 4 || m == 11 || m == 6 || m == 9){
		m1=30;
	}else if (m == 2){
		if(y % 4 == 0){
			m1=28;
		}else{
			m1=29;
		}
	}

	return m1;
}

#include <stdio.h>
#include <ctype.h>

int main()
{
	int n,a;
	scanf("%d",&n);
	scanf("%d",&a);
	printf("%s\n",isLeapYear(a));
	printf("month %d of %d has %d days ",n,a,numberofDays(n,a));
	
	return 0;
}

