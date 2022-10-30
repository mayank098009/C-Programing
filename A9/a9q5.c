#include<stdio.h>

int main(){
    int year;

    printf("enter the value od year");
    scanf("%d",&year);

    if(year%4==0 && year%100!=0){

        printf("you have entered a LEAP YEAR");
    }
    else {
        printf("NOT LEAP YEAR");

    }
    
    return 0;
}