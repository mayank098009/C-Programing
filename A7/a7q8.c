#include<stdio.h>
#include<math.h>

int main(){
    int a;
    int b;
    int c;
    int D;
    

    printf("enter the  a ");
    scanf("%d",&a);

    printf("enter the  b ");
    scanf("%d",&b);

    printf("enter the c ");
    scanf("%d",&c);



    D = (b*b)-(4*a*c);
    printf("discriminant is %d\n",D);

    
    if (D>0){

        printf("real and distinct ");
    }

    else if (D==0){

        printf("real and equal");


    }
    else {
        ("imaginary and unequal");

    }
    return 0;



}