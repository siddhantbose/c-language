//divisible by 3:fizz,divisible by 5:hizz,divisible by 3&5: fizz hizz
#include<stdio.h>
int main()
{
	int number;
	printf("enter your number");
	scanf("%d",&number);
	if(number%3==0)
	{
		if(number%5==0)
			printf("fizz hizz");
		else
			printf("fizz");
		}
		else if(number%5==0)
			{
				printf("hizz");
			}
		else
		{
			printf("number:%d",number);
		}
	return 0;
}

