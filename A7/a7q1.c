#include<stdio.h>
int main(){
    int a;
    int b;



    printf("enter the value of a\n");
    scanf("%d",&a);
    printf("enter the value of  b\n");
    scanf("%d",&b);


    if (a >= b){
        printf(" %d is largest",a);
    }
    
    else {
        printf("%d is largest",b);

    }

    return 0;
}