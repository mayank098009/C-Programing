#include<stdio.h>

int main(){
    int a;
    int i;
    printf("enter the natural number:");
    scanf("%d",&a);

    for(int i=a; i>=0; i=i-1)
    {
        printf("%d\n",i);
    }
    return 0;
}