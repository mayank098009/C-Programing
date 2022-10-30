#include <stdio.h>

int main()
{
    int km, meter;
    printf("[km to meter convetor]\n");
    printf("enter the distance between two cities:");
    scanf("%d", &km);

    meter = km * 1000;

    printf("distance in meter is %d", meter);
    return 0;
}