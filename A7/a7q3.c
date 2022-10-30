#include<stdio.h>
int main(){
    int a;
    int b;
    int c;
    
    printf("enter the value of a ");
    scanf("%d",&a);

    printf("enter the value of b");
    scanf("%d",&b);

    printf("enter your choice(1-4) ");
    scanf("%d",&c);

    if (c==1){
    printf("%d",a+b);
    }
    else if (c==2){
        printf("%d",a-b);
    }
    else if (c==3){
        printf("%d",a*b);
        
    }
    else if (c==4){
    printf("%d",a/b);
    }
    else if (c==0){
        printf("no operator");
    }
    return 0;


}