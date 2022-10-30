#include<stdio.h>
int main()
{
	int a;
	printf("enter the value of a");
	scanf("%d",&a);
	if (a>0)
	{
		printf("positive\n");
	if (a%10==0)
	{
		printf("%d is divisible by 10",a);
	}
	else 
	{
		printf("%d is not divisible by 10",a);
	}
    }
    else if(a==0)
    {
    	printf("zero");
	}
	else
	{
		printf("negative");
	}
	return 0;
}
