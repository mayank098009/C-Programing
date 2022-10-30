#include<stdio.h>

int main(){
    int a;
    int b;
    printf("enter the number:");
    scanf("%d",&a);

    b= a%10;
    printf("%d:",a-b);
    
    return 0;
}