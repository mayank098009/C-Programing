#include<stdio.h>

int main(){
    int a;
    int b; 
    int c;

    printf("enter the value of a\n");
    scanf("%d",&a);

    printf("enter the value of b\n");
    scanf("%d",&b);

    printf("enter the value of c\n");
    scanf("%d",&c);

    if (a+b > c){
        printf("the triangle is valid");

    }
    else {
        printf("the triangle is not valid ");
    }








    return 0;
}