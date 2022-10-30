#include<stdio.h>

int main(){
    int n;
    int  a=5;

    printf("enter the number of which you want a factorial : ");
    scanf("%d",&n);

    for(int i=1 ; i <=n; i=i+1)
    {
        a=a*1;
    }
    printf("factorial of %d is : %d",n,a);
    
    return 0;
}