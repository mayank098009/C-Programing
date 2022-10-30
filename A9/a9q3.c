#include <stdio.h>

int main()
{
    int a;

    printf("enter the value of a");
    scanf("%d", &a);

    if (a % 2 == 0)
    {
        if (a % 2 == 0 && a % 3 == 0)
        {
            printf("divisible by 2 and 3");
        }
        else
        {
            printf("not divisible");
        }
    }
    else
    {
    }
    if (a % 2 != 0)
    {
        if (a % 5 == 0)
        {
            printf("divisible by 5");
        }
        else
        {
            printf("not divisible");
        }
    }

    return 0;
}