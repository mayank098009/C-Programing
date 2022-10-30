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
	if(a==b==c)
	{
		printf("its an equilateral triangle");
	}
	else if(a==b!=c && b==c!=a && c==a!=b)
	{
		printf("its an isoceles triangle");
	}
	else if(a!=b!=c)
	{
		printf("its an scalane triangle");
	}
	return 0;
}
	
