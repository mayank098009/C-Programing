#include <stdio.h>
int main()
{
    int month;

    printf("enter the month number (1-12)");
    scanf("%d", &month);

    if (month == 1)
    {

        printf("31 days january");
    }
    else if (month == 2)
    {
        printf("28 and 29 days february");
    }
    else if (month == 3)
    {
        printf("31 days march");
    }
    else if (month == 4)
    {
        printf("30 days april");
    }
    else if (month == 5)
    {
        printf("31 days may");
    }
    else if (month == 6)
    {
        printf("30 days june");
    }
    else if (month == 7)
    {
        printf("31 days july");
    }
    else if (month == 8)
    {
        printf("31 days august");
    }
    else if (month == 9)
    {
        printf("30 days september");
    }
    else if (month == 10)
    {
        printf("31 days octomber");
    }
    else if (month == 11)
    {
        printf("30 days november");
    }
    else if ("month == 12")
    {
        printf("31 days december");
    }
    else
    {
        printf("not defined enter only no. to 1-12 ");
    }

    return 0;
}