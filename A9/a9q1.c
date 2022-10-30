#include<stdio.h>

int main(){
    int a;
    int b;
    
    printf("enter the value of a");
    scanf("%d",&a);

    printf("enter the value of b");
    scanf("%d",&b);

    if (a>b&& a>=500&& a<=1000){
        printf("the greatest number  is %d",a);
    }

    else if (b>a&& b>=500&& b<=1000){
        printf("the greatest number is %d",b);
    }

    else {
        printf("not available");
    }

    return 0;
}