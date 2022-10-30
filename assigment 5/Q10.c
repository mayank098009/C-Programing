#include<stdio.h>
int main()
{
int s1,s2,s3,s4,s5,Tmarks,percentage;
printf("enter the marks of s1,s2,s3,s4,s5:");
scanf("%d %d %d %d %d",&s1,&s2,&s3,&s4,&s5);
Tmarks=s1+ s2+ s3 +s4+ s5;
percentage=Tmarks*100/500;
printf("percentage %d",percentage);

return 0;
	
	
}
