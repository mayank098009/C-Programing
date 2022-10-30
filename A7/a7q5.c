#include<stdio.h>
int main(){
    int a;

    printf("enter the value of a ");
    scanf("%d",&a);

    if(a<10){
    printf("%d is less than 10",a);
    }

    else if(a>10){
        printf("%d is greater than 10",a);
    }

    return 0;
    

}