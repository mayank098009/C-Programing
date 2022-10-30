#include<stdio.h>
int main()
{
	int a;
	printf("enter the value of a \n");
	scanf("%d",&a);
	 
	printf("value of ones place digit in a %d\n",a%10);
	
	
	printf("value of tenth place digit in a %d",(a%100)/10);
	
	
}
