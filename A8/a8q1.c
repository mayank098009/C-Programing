#include<stdio.h>
int main(){
    int a , b , c ;

    printf("enter the value of a");
    scanf("%d",&a);

    printf("entr the value of b ");
    scanf("%d",&b);

    printf("enter the value of c");
    scanf("%d",&c);

    if (a > b && a>c ){
    printf("%d is the largest ",a);
    }

    else if (b > a && b > c ){
        printf("%d is the largest",b);   
    }
    else {
        printf("%d is the largest",c);
    }

    return 0;

   }