#include <stdio.h>
#include <ctype.h>

int main()
{
	int arr[100];
	int sum=0,i;
	for(i = 0; i < 5;i++){
		scanf("%d",&arr[i]);
	}
	
	for(i = 0; i < 5;i++){
		sum+=arr[i];
	}
	
	printf("mean = %d",sum/5);
	
	return 0;
}





