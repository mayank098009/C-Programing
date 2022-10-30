#include<stdio.h>
int main()
{int n,i,a,b;
printf("enter the value");
scanf("%d",&n);
for (i=1;i<=n;i=i+1)
{
	printf("enter the value of a and b");
	scanf("%d %d",&a,&b);
	printf("sum of is %d",a+b);
}
return 0;
}
