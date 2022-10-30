#include<stdio.h>

int main()
{
    int N;
    int n;
    int a;


    printf("enter  the number of which pairs you need");
    scanf("%d",&N);

    for ( int i = 1; i <=N; i++)
{
    printf("value of pair:");
    scanf("%d %d",&a,&n);
    printf("addition is %d",a+n);
}

    
    return 0;
}