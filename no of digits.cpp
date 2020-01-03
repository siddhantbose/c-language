//wap to accept the number and find out the no of digits in the number
#include<stdio.h>
int main()
{
	int number;
	printf("enter a number:");
	scanf("%d",&number);
	int count=0;
	while(number>0)
	{
		number=number/10;
		count=count+1;
	}
	printf("%d",count);
	return 0;
	}

