#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter a,b,c: ");
    scanf("%d %d %d", &a,&b,&c);
    
    if (a+b>c&&a+c>b&&b+c>a)
    {
        printf("Triangle Is Valid");
    }
    else
    {
        printf("Triangle is not valid");
    }
    
    return 0;
}