#include <stdio.h>

int main()
{
    int month;
    printf("enter month number\n");
    scanf("%d", &month);

    if (month = 1)
    {
        printf("31 days in january");
    }
    else if (month = 2)
    {
        printf("28 days in feb");
    }
    else if(month=3){
        printf("31 days in march");
    }
    else if(month=4){
        printf("30 days in april");
    }
    else if(month=5){
        printf("31 days in may");
    }
    else  if(month=6){
        printf("30 days in june");

    }
    else if(month=7){
        printf("31 days in july");
    }
    else if (month=8){
        printf("31 days in august");
    }
    else if(month=9)
{
    printf("30 days in september");
}    
else if(month=10){
    printf("31 days in october");
}
else if(month=11){
    printf("30 days in november");
    }
    else if(month=12){
        printf("31 days in december");
    }
    else {
        printf("invalid");
    }


return 0;
}