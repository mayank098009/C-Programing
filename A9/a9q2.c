#include<stdio.h>

int main(){
    int math; 
    int english;
    int sst;
    int computer;
    int physics;

    printf("enter the value of math");
    scanf("%d",&math);

    printf("enter the value of english");
    scanf("%d",&english);

    printf("enter the value of sst");
    scanf("%d",&sst);

    printf("enter the value of computer ");
    scanf("%d",&computer);

    printf("enter the value of physics ");
    scanf("%d",&physics);

    if (math>=33 && math<=100){
        printf("pass");
    }
    else{
        printf("fail");
    }

    if (english>=33 && english<=100){
        printf("pass");
    }
    else {
        printf("fail");
    }

    if (sst>=33 && sst<=100){
        printf("pass");
    }
    else{
        printf("fail");
    }
    if (computer>=33 && computer<=100){
        printf("pass");
    }
    else {
        printf("fail");
    }

    if (physics>=33 && physics<=100){
        printf("pass");
    }
    else {
        printf("fail");
    }

    int totalmarks;

    totalmarks= math+english+sst+computer+physics;

    if (totalmarks>=165 && totalmarks<=500){
        printf("passed");

    }
    else {
        printf("failed");
    }

    




    return 0;
}