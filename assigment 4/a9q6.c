#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the value of first side");
	scanf("%d",&a);
	printf("enter the value of second side");
	scanf("%d",&b);
	printf("enter the value of third side");
	scanf("%d",&c);
	if (a+b>c && a+c>b && b+c>a)
	{
		printf("triangle is valid");
	}
	else
	{
		printf("triangle is not valid");
	}
	
}
