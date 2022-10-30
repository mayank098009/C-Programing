#include<stdio.h>

int main(){
    int km, millimeter;
    printf("[KM TO MILLIMETER CONVERTOR]\n");

    printf("enter the distance between to cities:");
    scanf("%d", &km);

    millimeter = km * 1000000;

    printf("distance in millimeter is %d",millimeter);


    return 0;
}