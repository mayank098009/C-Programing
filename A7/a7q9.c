#include <stdio.h>
#include <math.h>
int main()
{
    int cp;
    int sp;
    int profit;
    int loss;

    printf("enter the value of cp");
    scanf("%d", &cp);

    printf("enter the value of sp");
    scanf("%d", &sp);

    profit = (sp - cp) * 100 / sp;
    loss = (cp - sp) * 100 / cp;

    if (sp > cp)
    {
        printf("profit");
    }
    else
    {
        printf("loss ");
    }

    return 0;
}