#include<stdio.h>
int main(){
    int a;

    printf("enter the value a");
    scanf("%d",a);

    if (a%7 == 0 || a%3 == 0){
    printf("divisible");

    }
    else{
     ("not divisible");
    }

    return 0;
}