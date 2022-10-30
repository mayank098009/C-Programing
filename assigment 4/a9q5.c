#include<stdio.h>
int main()
{
	int feb;
	printf("enter the no. of days in feb");
	scanf("%d",&feb);
	if (feb==29)
	{
		printf("its an leap year");
	}
	    else
	{
		printf("its not an leap year");
	}
	return 0;
}

