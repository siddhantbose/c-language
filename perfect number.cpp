#include<stdio.h>
int main()
{
	int n,i,perfect=0;
	printf("enter a number");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			perfect+=i;
		}
		}
	if(n==perfect)
	{
		printf("perfect number");
	}
	else
	{
		printf("not a perfect number");
	}
	return 0;
	}
	
